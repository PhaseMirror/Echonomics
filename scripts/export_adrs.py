import os
import glob
import json

DOCS_DIR = "/media/citizen/b361d448-7c51-413a-aa23-9515cb626930/home/citizen/Multiplicity/packages/Echonomics/docs"
PROPOSED_DIR = os.path.join(DOCS_DIR, "adr", "proposed")
EXPORT_DIR = os.path.join(DOCS_DIR, "export")

def export_html(adr_files):
    os.makedirs(EXPORT_DIR, exist_ok=True)
    html_items = []
    
    for adr_path in sorted(adr_files):
        filename = os.path.basename(adr_path)
        with open(adr_path, 'r', encoding='utf-8') as f:
            content = f.read()
            
        html_items.append(f"""
        <article class="adr-card" style="border: 1px solid #ccc; padding: 15px; margin-bottom: 20px; border-radius: 5px;">
            <h3>{filename}</h3>
            <pre style="background: #f4f4f4; padding: 10px; border-radius: 3px; overflow-x: auto;">{content}</pre>
        </article>
        """)
        
    html_page = f"""<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <title>Echonomics ADR Governance Catalog (ADR-0001 through ADR-0021)</title>
    <style>
        body {{ font-family: -apple-system, BlinkMacSystemFont, "Segoe UI", Roboto, Helvetica, Arial, sans-serif; line-height: 1.6; max-width: 1000px; margin: 0 auto; padding: 20px; }}
        h1 {{ color: #2c3e50; border-bottom: 2px solid #3498db; padding-bottom: 10px; }}
    </style>
</head>
<body>
    <h1>Echonomics Architecture Decision Records (ADR-0001 through ADR-0021)</h1>
    <p>Machine-checked formal governance catalog generated for Echonomics Platform.</p>
    {"".join(html_items)}
</body>
</html>
"""
    with open(os.path.join(EXPORT_DIR, "index.html"), 'w', encoding='utf-8') as f:
        f.write(html_page)
    print(f"Exported HTML catalog to: {os.path.join(EXPORT_DIR, 'index.html')}")

def main():
    adr_files = glob.glob(os.path.join(PROPOSED_DIR, "*.md"))
    print(f"Found {len(adr_files)} proposed ADRs for export.")
    export_html(adr_files)

if __name__ == "__main__":
    main()

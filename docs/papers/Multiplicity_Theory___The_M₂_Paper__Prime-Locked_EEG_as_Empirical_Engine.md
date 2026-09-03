<!-- Page 1 -->
Multiplicity Theory, Recursive Becoming, and 
Prime-Locked EEG

The M₂ Functor Paper — Full Technical Integration with ORF EEG Phases 1 &

2

Foundation of Multiplicity / Citizen Gardens — April 3, 2026

Overview

The paper "Multiplicity Theory, Recursive Becoming, and Prime-Locked EEG" (April 3, 2026) is the

most mathematically precise document the Foundation has yet released for the EEG empirical

program. It does three things simultaneously:

1.​ Formalises the multiplicity functor 
 as a proper categorical construction — 
𝑀: 𝐶Ξ →𝐶𝑚𝑢𝑙𝑡

not just a heuristic mapping but an actual functor between two well-defined categories, with

composition laws and Lipschitz morphisms.

2.​ Instantiates 
 concretely as a preregisterable MNE-Python pipeline for 64-channel EEG, 
𝑀2

specifying every parameter (prime set, base frequency, bin boundaries, PSD method, channel

weighting, normalization) unambiguously.

3.​ Defines cross-stratum coherence as Jensen–Shannon distance between multiplicity

spectra, making the primary empirical hypothesis a single statistical inequality with a

falsification condition.

The document sits between the abstract ORF operator framework and the TriPrime clinical study: it is

the pipeline specification that turns the  contraction metric and the six-component invariant vector 
λˆ

into a fully executable, preregisterable measurement procedure. 
𝐼(𝑀𝑘)

Part I — The Mathematical Structure

1.1 The Master Equation

The core dynamical equation is:

<!-- Page 2 -->
𝑑Ξ(𝑡)

𝑑𝑡
= Λ𝑚𝑀Ξ(𝑡) + [𝑀, Ξ(𝑡)]#(1)

where:

●​
 is the recursive tensor field — a multi-stratum object encoding dynamics across all levels 
Ξ(𝑡)

simultaneously

●​
 is the Universal Multiplicity Constant, stabilising recursive interactions 
Λ𝑚

●​
 is the Multiplicative Operator modulating recursive strain 
𝑀

●​
 is the torsion term — the nonlinear recursive feedback loop 
[𝑀, Ξ(𝑡)]

The torsion term is what distinguishes Equation (1) from a standard linear semigroup. When

, the system reduces to pure contraction under 
. When the commutator is nonzero, 
[𝑀, Ξ(𝑡)] = 0
Λ𝑚𝑀

recursive cross-stratum feedback is active. This is precisely the mechanistic signature of Phase 2 (noise

and loop dynamics): a directed loop is a configuration where the torsion term is large, self-reinforcing,

and resistant to decay.

Additionally, a prime-indexed tensor field bridges discrete prime structure and continuous dynamics:

Ψ𝑝(𝑡) =

𝑖=1

### 𝑁
∑ 𝑝𝑖· 𝑇(𝑝𝑖, 𝑡)#(2)

This is the "shadow" of the full multiplicity functor — 
 is the scalar observable that a single-prime 
Ψ𝑝(𝑡)

channel extracts from 
. 
Ξ(𝑡)

1.2 The Two Categories

Source category 
 — objects are stratum-specific state spaces: 
𝐶Ξ

●​
: adelic module over a prime set (Stratum 0 — mathematics/physics) 
Ξ𝑎𝑑𝑒𝑙𝑖𝑐(𝑡) ∈𝐴𝑑𝑒𝑙,𝑃0

●​
: operadic category of EEG time windows (Stratum 2 — cognition) 
Ξ𝑞𝑢𝑎𝑙𝑖𝑎(𝑡) ∈𝑂𝑝𝑒𝑟𝐸𝐸𝐺

●​
: social networks with probability distributions on messages (Stratum 4 — 
Ξ𝑠𝑜𝑐𝑖𝑎𝑙(𝑡) ∈𝑃𝑟𝑜𝑏𝑁𝑒𝑡𝑁

collective)

Morphisms in 
 are recursive update maps and cross-stratum functors. The global dynamics is an 
𝐶Ξ

endofunctor 
 reducing to Equation (1) at the object level. 
𝑇: 𝐶Ξ →𝐶Ξ

Target category 
 — the multiplicity category: 
𝐶𝑚𝑢𝑙𝑡

<!-- Page 3 -->
●​
Objects: probability distributions 
 over the prime set 
 
𝑤∈∆(𝑃)
𝑃= {2, 3, 5, 7, 11, 13}

●​
Morphisms: Markov operators 
 satisfying 
, 
 
𝐾: ∆(𝑃) →∆(𝑃)
𝐾𝑗𝑖≥0

𝑗
∑ 𝐾𝑗𝑖= 1

●​
Metric: Jensen–Shannon distance (symmetric, bounded, natively provided in

scipy.spatial.distance)

Morphisms of interest are 1-Lipschitz under the Jensen–Shannon metric — this is the categorical

statement of the contraction condition 
. 
λˆ < 1

1.3 The Multiplicity Functor 
 
𝑀

The functor is defined stratum-specifically:

𝑀0: 𝐴0 →𝐶𝑚𝑢𝑙𝑡, 𝑀2: 𝐴2 →𝐶𝑚𝑢𝑙𝑡, 𝑀4: 𝐴4 →𝐶𝑚𝑢𝑙𝑡

For Stratum 0 (adelic toy model), local -adic norms yield the distribution: 
𝑝

𝑤𝑎𝑑𝑒𝑙𝑖𝑐(𝑝) =

‖Ξ𝑎𝑑𝑒𝑙𝑖𝑐‖𝑝

𝑞∈𝑃0

∑ ‖Ξ𝑎𝑑𝑒𝑙𝑖𝑐‖𝑞

For Stratum 4 (social), eigenvalues 
 of a covariance/adjacency matrix are sorted and mapped to 
λ𝑟

primes:

𝑤𝑠𝑜𝑐𝑖𝑎𝑙(𝑝𝑟) =

λ𝑟

𝑖
∑ λ𝑖

For Stratum 2 (EEG/qualia) — the concrete instantiation 
 — see Part II. 
𝑀2

1.4 Cross-Stratum Coherence

Cross-stratum coherence is defined by bounded Jensen–Shannon distance between multiplicity

spectra:

𝑑𝐽𝑆(𝑤0(𝑡), 𝑤2(𝑡)) ≤ε#(3)

𝑑𝐽𝑆(𝑤2(𝑡), 𝑤4(𝑡)) ≤ε#(4)

The dynamics of Equation (1) are designed to evolve 
 so that these inequalities hold over extended 
Ξ(𝑡)

time intervals. A forthcoming stability lemma will prove that if per-stratum update maps are

Lipschitz in multiplicity space, then cross-stratum distances remain bounded — connecting the

Lipschitz condition of the Markov morphisms to long-term coherence persistence. This is the

<!-- Page 4 -->
mathematical bridge between 
 (local contraction) and sustained cross-stratum coherence 
λˆ < 1

(global stability).

Part II — The 
 Pipeline: Full Specification 
𝑀2

2.1 Prime Set and Frequency Mapping

The pipeline fixes:

𝑃= {2, 3, 5, 7, 11, 13}, 𝑓0 = 4 𝐻𝑧

𝑓𝑝= 𝑓0𝑙𝑜𝑔⁡𝑝 ⇒ 𝑏𝑖𝑛(𝑝) =

𝑓𝑝

2 , 𝑓𝑝2
⎡⎢⎣

⎤⎥⎦

This places all prime-centered frequencies in the 2.5–11 Hz band, covering theta (
 Hz) and 
4 −8

alpha (
 Hz) rhythms. The half-octave bins are the EEG counterpart of the spectral gap in the 
8 −13

USO: only frequencies within a prime's bin contribute to its multiplicity weight.

The resulting frequency map:

Prime  
𝑝
 (Hz) 
𝑓𝑝

Bin low (Hz) 
Bin high (Hz) 
Primary EEG band

2 
2.77 
1.96 
3.92 
Delta/theta

boundary

3 
4.39 
3.11 
6.22 
Theta

5 
6.44 
4.55 
9.10 
Theta/alpha

7 
7.78 
5.50 
11.01 
Alpha

11 
9.59 
6.78 
13.57 
Alpha/sigma

13 
10.37 
7.33 
14.67 
Alpha/beta

boundary

2.2 Preprocessing Pipeline

The MNE-Python preprocessing chain is fully specified:

1.​ Data loading: BIDS format, standard 10–20 montage

2.​ Filtering: 1–30 Hz bandpass (zero-phase FIR) + notch at 50/60 Hz

<!-- Page 5 -->
3.​ Resampling: to 500 Hz

4.​ Rereferencing: average reference after bad channel marking

5.​ Epoching: 4-second non-overlapping windows (resting state) or 4-second sliding windows with

50% overlap (task)

6.​ Artifact rejection: epochs exceeding 150 µV peak-to-peak dropped; ICA for ocular artifacts

(parameters fixed a priori)

Every parameter is specified before data collection — this is a preregisterable pipeline.

2.3 PSD Estimation and Channel Weights

Welch PSD via MNE's epochs.compute_psd:

●​
Segment length: 2-second windows

●​
Overlap: 50%

●​
Frequency range: 1–30 Hz

Channel weights 
 use inverse variance across epochs, with bad channels receiving zero weight: 
ω𝑐

ω𝑐=

σ𝑐

−2

𝑑
∑ σ𝑑

−2

This is a robust estimator: noisy channels contribute less without being excluded entirely.

2.4 Global Multiplicity Spectrum

For each epoch :

𝐴𝑝(𝐸) =

𝑐
∑ ω𝑐𝑏𝑖𝑛(𝑝)

∫
 𝑆𝑐(𝑓; 𝐸) 𝑑𝑓

𝑀2(𝐸) = 𝑤𝐸∈∆(𝑃), 𝑤𝐸(𝑝) =

𝐴𝑝(𝐸)

𝑞∈𝑃

∑ 𝐴𝑞(𝐸)

The global multiplicity spectrum is a probability distribution over six primes, computed independently

for each 4-second EEG epoch.

2.5 Regional Multiplicity Spectra

Regional pooling produces topographic multiplicity maps:

<!-- Page 6 -->
Region 
Channels

Frontal 
Fp1, Fp2, F3, F4, F7, F8, Fz

Central 
C3, C4, Cz

Parietal 
P3, P4, Pz

Occipital 
O1, O2, Oz

Each region produces 
, enabling spatial dissociation of multiplicity structure 
𝑀2

(𝑟)(𝐸) = 𝑤𝐸

(𝑟) ∈∆(𝑃)

across the scalp. This is the EEG counterpart of the regional coherence pattern that Ken's Sensory

Reintegration framework predicts: frontal-occipital coherence should increase under TriPrime

conditions.

2.6 Operadic Composition Laws

Time concatenation of epochs 
 of durations 
: 
𝐸1, ..., 𝐸𝑛
𝑇𝑖

𝑤𝐸

∗(𝑝) =

𝑖
∑ 𝑇𝑖 𝑤𝐸𝑖

(𝑝)

𝑖
∑ 𝑇𝑖

Region pooling with mixing coefficient : 
α

𝑤𝐸

(𝑟

∗)(𝑝) = α 𝑤𝐸

(𝑟1)

(𝑝) + (1 −α) 𝑤𝐸

(𝑟2)

(𝑝)

Both operations are Markov (stochastic linear) maps — they are valid morphisms in 
, preserving 
𝐶𝑚𝑢𝑙𝑡

the probability simplex structure. This matters: it means time-averaged multiplicity spectra and

region-pooled spectra are in the same mathematical space as epoch-level spectra, and

Jensen–Shannon distances between them remain valid.

Part III — Coherence Statistic and Primary Hypothesis

3.1 Jensen–Shannon Coherence

The primary empirical signature is a decrease in Jensen–Shannon distance between the EEG

multiplicity spectrum and a parallel social/interaction stratum spectrum:

𝐸[𝑑𝐽𝑆

𝑟𝑒𝑠𝑡] > 𝐸[𝑑𝐽𝑆

𝑖𝑛𝑡𝑒𝑟𝑎𝑐𝑡𝑖𝑜𝑛]

<!-- Page 7 -->
Under increased cross-stratum coupling (e.g., interactive social tasks vs. rest), the qualia spectrum

should move toward the social spectrum 
 in 
. This is a one-directional 
𝑤𝑞𝑢𝑎𝑙𝑖𝑎(𝑡)
𝑤𝑠𝑜𝑐𝑖𝑎𝑙(𝑡)
∆(𝑃)

hypothesis with a clear numerical test.

3.2 The 
 Social Stratum 
𝑀4

The social multiplicity spectrum uses eigenvalues of a covariance or adjacency matrix:

𝑤𝑠𝑜𝑐𝑖𝑎𝑙(𝑝𝑟) =

λ𝑟

𝑖
∑ λ𝑖

where 
 are sorted eigenvalues ranked by prime index. For a Discord/chat-based social experiment, 
λ𝑟

this would be the eigenvalue distribution of the message-count covariance matrix across agents in a

time window — directly computable from platform logs.

Part IV — Integration with ORF EEG Phases 1 & 2

4.1 How 
 Upgrades Phase 1 
𝑀2

The Phase 1 contraction metric 
 was computed on a four-component error 
λˆ = 𝑚𝑒𝑑𝑖𝑎𝑛(𝐸𝑘+1/𝐸𝑘)

vector. The 
 paper provides the canonical error measure for that computation: the error 
𝑀2

between epoch  and baseline should be computed as Jensen–Shannon distance between their 
𝑘

multiplicity spectra in 
: 
∆(𝑃)

𝐸𝑘= 𝑑𝐽𝑆(𝑤𝑘, 𝑤𝑏𝑎𝑠𝑒𝑙𝑖𝑛𝑒)

This is more principled than a Euclidean norm on raw spectral features: it is invariant under the

Markov morphisms of 
, meaning it does not change when one applies valid time-averaging or 
𝐶𝑚𝑢𝑙𝑡

region-pooling operations. The  metric becomes: 
λˆ

λˆ = 𝑚𝑒𝑑𝑖𝑎𝑛

𝑑𝐽𝑆(𝑤𝑘+1, 𝑤𝑏𝑎𝑠𝑒𝑙𝑖𝑛𝑒)

𝑑𝐽𝑆(𝑤𝑘, 𝑤𝑏𝑎𝑠𝑒𝑙𝑖𝑛𝑒)
(
)

A system contracting to baseline corresponds to a sequence of multiplicity spectra converging in 
 
∆(𝑃)

— exactly what the stability lemma (forthcoming) will guarantee for Lipschitz per-stratum dynamics.

4.2 How 
 Informs Phase 2 
𝑀2

<!-- Page 8 -->
Phase 2 identifies instability via the R/V/N signature. In 
 terms: 
𝑀2

Phase 2 Component 
 Interpretation 
𝑀2

(Kuramoto order) 
𝑅(𝑡)
Concentration of 
 on a small subset of primes (low 
𝑤𝑘

entropy in 
) 
∆(𝑃)

(misalignment energy) 
𝑉(𝑡)
 — the Jensen–Shannon distance itself 
𝑑𝐽𝑆(𝑤𝑘, 𝑤𝑏𝑎𝑠𝑒𝑙𝑖𝑛𝑒)

(noise load) 
𝑁(𝑡)
Variance of 
 across channels / uniform spread in 
 
𝑤𝑘
∆(𝑃)

Directed loop 
Temporal autocorrelation of 
 failing to decay — 
𝑑𝐽𝑆

persistent misalignment

This gives Phase 2 a single unified metric space — 
 with Jensen–Shannon distance — in which all 
∆(𝑃)

four diagnostic components live. A loop is detected when 
 shows autocorrelation at 
𝑑𝐽𝑆(𝑤𝑘, 𝑤𝑏𝑎𝑠𝑒𝑙𝑖𝑛𝑒)

lags 
 epoch, and 
 does not decrease monotonically over the recovery window. 
> 1
𝑉(𝑡)

4.3 The TriPrime Protocol in 
 Language 
𝑀2

Ken's three TriPrime conditions translate directly into predictions about multiplicity spectra in 
: 
∆(𝑃)

TriPrime Component 
Predicted Effect on 
 
𝑤𝑘
Measurable Via

Sensory Balance 
 concentrates away from 
𝑤𝑘

high-noise primes (p=11,13); entropy

↓

decreasing 
𝐻(𝑤𝑘)

Autonomy 
 
𝑑𝐽𝑆(𝑤𝑘

(𝑓𝑟𝑜𝑛𝑡𝑎𝑙), 𝑤𝑘

(𝑜𝑐𝑐𝑖𝑝𝑖𝑡𝑎𝑙))

decreases

Regional coherence statistic

Monotropic Flow 
 stabilizes on a consistent 
𝑤𝑘

prime-indexed attractor across

epochs

Temporal stability of 
 
𝑤𝑘

TriPrime Alignment (all three) 
; 
 
𝑑𝐽𝑆(𝑤𝑘, 𝑤𝑏𝑎𝑠𝑒𝑙𝑖𝑛𝑒) →0 λˆ < 1
Phase 1 metric

<!-- Page 9 -->
Part V — The Stability Lemma (Anticipated Structure)

The paper identifies a forthcoming stability lemma as the key mathematical bridge. Based on the

structure already in place, the lemma should take the following form:

Anticipated Stability Lemma. Suppose the per-stratum update maps 
 are 
𝑇𝑖: ∆(𝑃) →∆(𝑃)
𝐿𝑖

-Lipschitz under 
, with 
 for all . Then for any initial cross-stratum distance 
𝑑𝐽𝑆
𝐿𝑖< 1
𝑖

, we have: 
𝑑𝐽𝑆(𝑤𝑖(0), 𝑤𝑗(0)) ≤δ

𝑑𝐽𝑆(𝑤𝑖(𝑡), 𝑤𝑗(𝑡)) ≤δ + 𝐶(𝐿𝑖, 𝐿𝑗) · 𝑡

where 
 as 
. In particular, if 
, then bounded initial cross-stratum distances 
𝐶(𝐿𝑖, 𝐿𝑗) →0
𝐿𝑖, 𝐿𝑗→0
𝐿𝑖< 1

remain bounded under the coupled dynamics.

The condition 
 is the Lipschitz contraction condition — the categorical statement of 
. The 
𝐿𝑖< 1
λˆ < 1

lemma would thus prove that Phase 1 structural stability (local 
) implies Phase 2 recovery 
λˆ < 1

(global loop dissolution) in the multiplicity space framework.

Part VI — Code Skeleton Assessment

The paper provides a complete, runnable Python skeleton using MNE-Python, NumPy, and SciPy. Key

implementation notes:

What Is Already Complete

PRIMES = np.array([2, 3, 5, 7, 11, 13], dtype=float)​

F0 = 4.0  # Hz​

FP = F0 * np.log(PRIMES)​

BIN_LOW = FP / np.sqrt(2.0)​

BIN_HIGH = FP * np.sqrt(2.0)​

●​
compute_epoch_psd(): full Welch PSD computation via MNE

●​
compute_channel_weights(): inverse-variance weighting with bad-channel masking

●​
compute_w_qualia(): global multiplicity spectrum 
 
𝑀2(𝐸)

●​
compute_w_qualia_regional(): regional spectra per anatomical region

●​
js_distance_matrix(): Jensen–Shannon distance across epoch pairs

<!-- Page 10 -->
●​
run_subject_pipeline(): end-to-end pipeline from raw EEG file to multiplicity spectra

What Remains to Implement

1.​
 instantiation: social eigenvalue mapping — requires a real social interaction dataset or a 
𝑀4

simulated agent network

2.​
 from 
: computing 
 across a trial sequence 
λˆ
𝑑𝐽𝑆
𝑚𝑒𝑑𝑖𝑎𝑛(𝑑𝐽𝑆(𝑤𝑘+1, 𝑤𝑏𝑎𝑠𝑒𝑙𝑖𝑛𝑒)/𝑑𝐽𝑆(𝑤𝑘, 𝑤𝑏𝑎𝑠𝑒𝑙𝑖𝑛𝑒))

3.​ Phase 2 autocorrelation test: detecting persistent 
 non-decay (loop signature) 
𝑑𝐽𝑆

4.​ TriPrime condition comparison: three-condition ANOVA on  and 
 statistics 
λˆ
𝑑𝐽𝑆

5.​ Statistical power calculation: required before preregistration

The skeleton can be extended to produce a complete ORF EEG analysis pipeline in approximately 200

additional lines of Python.

Part VII — Immediate Next Steps

Priority 1 — Numerical Sanity Check (Days 1–3)

Run the 
 skeleton on a public resting-state EEG dataset from OpenNeuro (e.g., dataset ds002345 or 
𝑀2

similar 64-channel resting state). The check: are the prime-indexed bins 
 receiving 
𝑓𝑝= 𝑓0𝑙𝑜𝑔⁡𝑝

non-trivial power? If all weight concentrates on one prime, the binning design requires adjustment.

Priority 2 —  via Jensen–Shannon (Days 3–7) 
λˆ

Replace the Phase 1 Euclidean error with 
 and re-run the Phase 1 simulation. 
𝐸𝑘= 𝑑𝐽𝑆(𝑤𝑘, 𝑤𝑏𝑎𝑠𝑒𝑙𝑖𝑛𝑒)

Expected outcome: cleaner 
 discrimination between lawful (φ-structured) and unlawful 
λˆ < 1

(scrambled) signals, because 
 respects the probability simplex geometry that Euclidean distance 
𝑑𝐽𝑆

ignores.

Priority 3 — Stability Lemma (Days 7–21)

The stability lemma proof is the single highest-leverage mathematical contribution remaining. A

complete proof would:

●​
Formally connect per-epoch 
 to sustained cross-stratum coherence 
λˆ < 1

<!-- Page 11 -->
●​
Justify the Phase 2 → Phase 3 transition prediction (loop dissolution → coherence restoration)

●​
Provide the mathematical grounding needed for journal submission of the ORF EEG paper

Priority 4 — Preregistration (Days 7–21)

The pipeline is now specified at the level required for preregistration on OSF or AsPredicted. The

preregistration document should include:

●​
Full 
 parameter specification (already complete) 
𝑀2

●​
Four falsifiable predictions from Phase 1 (P1–P4)

●​
The primary hypothesis: 
 
𝐸[𝑑𝐽𝑆

𝑟𝑒𝑠𝑡] > 𝐸[𝑑𝐽𝑆

𝑖𝑛𝑡𝑒𝑟𝑎𝑐𝑡𝑖𝑜𝑛]

●​
Power analysis (to be computed)

●​
Analysis code (the skeleton in the paper, extended with  and Phase 2 tests) 
λˆ

# GPUKMM
# Language: CUDA
# Input: TXT (list of input values)
# Output: TXT (list of best scoring sequences)
# Tested with: PluMA 1.0, CUDA 10

PluMA plugin that runs k-Markov Models (kMMs) to find the best match over
a set of metagenomics sequence data, for each of a given set of target sequences.

Note this is a GPU implementation of another plugin (KMM), and can run 2-3 times as
fast for the tested hardware configurations.

The plugin expects as input a file with three pieces of data, each on separate lines:

(order of Markov model, or value of k)
(directory of database, which contains a set of files of weights for each position of a sequence)
(input file in FASTA format, with target sequences)

The output will be a simple table that contains one row per target sequence,
with each row containing the sequence name from the database with the highest score
and the value of its score.


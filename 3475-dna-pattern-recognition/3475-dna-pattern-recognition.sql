/* Write your T-SQL query statement below */
select sample_id, dna_sequence, species,
    Case
        when dna_sequence like 'ATG%' then 1 else 0
    End as has_start,
    CASE
        when dna_sequence like '%TAA' 
        or dna_sequence like '%TAG' 
        or dna_sequence like '%TGA' THEN 1 
        else 0
    End as has_stop,
    Case
        when dna_sequence like '%ATAT%' then 1 else 0
    End as has_atat,
    Case 
        when dna_sequence like '%GGG%' then 1 else 0
    End as has_ggg
from Samples
order by sample_id
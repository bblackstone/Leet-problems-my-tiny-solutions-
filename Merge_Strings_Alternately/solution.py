class Solution:
    def mergeAlternately(self, word1: str, word2: str) -> str:
        merged_word = ""
        if len(word1) == len(word2) :
            for i in range(len(word1)) :
                merged_word += word1[i]
                merged_word += word2[i]
        elif len(word1) < len(word2):
            j_index = len(word2)-len(word1)
            for i in range(len(word1)) :
                merged_word += word1[i]
                merged_word += word2[i]
            for j in range(j_index):
                merged_word += word2[len(word1)+j]
        else: 
            j_index = len(word1)-len(word2)
            for i in range(len(word2)) :
                merged_word += word1[i]
                merged_word += word2[i]
            for j in range(j_index):
                merged_word += word1[len(word2)+j]
            
        return merged_word
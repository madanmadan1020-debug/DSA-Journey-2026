bool containsDuplicate(int* nums, int numsSize) {
    int tableSize = numsSize * 2 + 1;

    // Use 1 to indicate an occupied slot.
    // We need a separate array to store the actual keys.
    int *table = (int *)malloc(tableSize * sizeof(int));
    bool *occupied = (bool *)calloc(tableSize, sizeof(bool));

    for (int i = 0; i < numsSize; i++) {

        // Make hash index non-negative
        int index = nums[i] % tableSize;
        if (index < 0) {
            index += tableSize;
        }

        // Linear probing
        while (occupied[index]) {

            // Same actual value -> duplicate
            if (table[index] == nums[i]) {
                free(table);
                free(occupied);
                return true;
            }

            // Collision -> move to next position
            index = (index + 1) % tableSize;
        }

        // Empty position -> store the value
        table[index] = nums[i];
        occupied[index] = true;
    }

    free(table);
    free(occupied);

    return false;
}

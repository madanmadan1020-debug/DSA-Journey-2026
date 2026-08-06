double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size) {
    int s1, s2;
    s1 = s2 = 0;
    int i = 0;
    int e1 = nums1Size - 1;
    int e2 = nums2Size - 1;
    int m1 = (s1 + e1) / 2;
    int m2 = (s2 + e2) / 2;

    int merged_array[nums1Size + nums2Size];

    while (i < nums1Size) {

        if (nums1[s1] < nums2[s2]) {

            if (nums1[m1] < nums2[s2]) {

                for (int l = 0; l < m1; m1++) {
                    merged_array[l] = nums1[s1];
                    s1++;
                }

                i = m1;
                m1 = s1 + e1;

            } else if (nums1[m1] > nums2[s2]) {

                m1 = (s1 + m1) / 2;
                i = m1;
            }

        }

        else if (nums1[s1] > nums2[s2]) {

            if (nums1[m1] > nums2[s2]) {

                for (int l = 0; l < m2; m2++) {
                    merged_array[l] = nums1[s2];
                    s2++;
                }

                i = m2;
                m2 = s2 + e2;

            } else if (nums2[m2] > nums1[s1]) {

                m2 = (s2 + m2) / 2;
                i = m2;
            }
        }
    }

    int median = sizeof(merged_array) / sizeof(merged_array[1]) / 2;

    return median;
}

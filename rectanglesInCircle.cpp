// Number of Rectangles in a Circle
// GFG: Medium 18-06-2024

// Intutuion: The diagonal of the rectangle should be less than or equal to the diameter of the circle.

int rectanglesInCircle(int r) {
        // code here
        int count=0;
        for(int i=1;i<=2*r;i++)
        {
            for(int j=1;j<=2*r;j++)
            {
                if(sqrt(i*i+j*j)<=2*r)
                count++;
            }
        }
        return count;
    }

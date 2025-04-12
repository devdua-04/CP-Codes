class SubrectangleQueries
{
public:
    SubrectangleQueries(vector<vector<int>>& rectangle) : m_rectangle(rectangle)
    {}
    
    void updateSubrectangle(int row1, int col1, int row2, int col2, int newValue)
    {
        m_updates.push_back({row1, col1, row2, col2, newValue});
    }
    
    int getValue(int row, int col)
    {
        size_t numOfUpdates = m_updates.size();
        for (int i = numOfUpdates - 1; i >= 0; --i)
        {
            if (m_updates[i].row1 <= row && row <= m_updates[i].row2 &&
                m_updates[i].col1 <= col && col <= m_updates[i].col2)
            {
                return m_updates[i].newValue;
            }
        }

        return m_rectangle[row][col];
    }
private:
    vector<vector<int>> m_rectangle;
    struct Update
    {
        int row1, col1, row2, col2, newValue;
    };
    vector<Update> m_updates;
};

/**
 * Your SubrectangleQueries object will be instantiated and called as such:
 * SubrectangleQueries* obj = new SubrectangleQueries(rectangle);
 * obj->updateSubrectangle(row1,col1,row2,col2,newValue);
 * int param_2 = obj->getValue(row,col);
 */
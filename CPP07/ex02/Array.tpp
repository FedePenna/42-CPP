template <typename T>
Array<T>::Array(void)
{
    this->m_data = new T[0];
    this->m_size = 0;
}
template <typename T>
Array<T>::Array(unsigned int n)
{
    this->m_data = new T[n]();
    this->m_size = n;
}

template <typename T>
Array<T>::Array(const Array& other)
{
    this->m_size = other.m_size;
    this->m_data = new T[m_size];
    for (size_t i = 0; i < m_size; i++)
        m_data[i] = other.m_data[i];
}
template <typename T>
Array<T>& Array<T>::operator=(const Array &other)
{
    if (this != &other)
    {
        delete[] m_data;
        m_size = other.m_size;
        m_data = new T[m_size];
        for (size_t i = 0; i < m_size; i++)
            m_data[i] = other.m_data[i];
    }
    return *this;
}
template <typename T>
Array<T>::~Array(void)
{
    delete[] m_data;
}
template <typename T>
unsigned int Array<T>::size() const
{
    return m_size;
}
template <typename T>
const T& Array<T>::operator[](unsigned int i) const
{
    if (i >= m_size)
        throw std::out_of_range("Index out of range");
    return m_data[i];
}
template <typename T>
T& Array<T>::operator[](unsigned int i)
{
    if (i >= m_size)
        throw std::out_of_range("Index out of range");
    return m_data[i];
}

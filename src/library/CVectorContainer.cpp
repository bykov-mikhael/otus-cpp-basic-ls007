/**
 * @brief конструктор
*/
template <typename T>
CVectorContainer<T>::CVectorContainer() : m_head(nullptr),
                                          m_size(0) {
  ;
}


/**
 * @brief деструктор
*/
template <typename T>
CVectorContainer<T>::~CVectorContainer() {
  //delete[] m_values;
}
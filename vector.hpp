#include <memory>

namespace MySTL {
template<
    class T,
    class Allocator = std::allocator<T>
>
class vector {
    using value_type = T;
    using allocator_type = Allocator;
    using size_type = std::size_t;
    using difference_type = std::ptrdiff_t;
    using reference = value_type&;
    using const_reference = const value_type&;
    using pointer = typename std::allocator_traits<Allocator>::pointer;
    using const_pointer = typename std::allocator_traits<Allocator>::const_pointer;
// iterator 遗留随机访问迭代器 (LegacyRandomAccessIterator) 
// const_iterator 常随机访问迭代器 
// reverse_iterator std::reverse_iterator<iterator> 
// const_reverse_iterator std::reverse_iterator<const_iterator> 

};
}
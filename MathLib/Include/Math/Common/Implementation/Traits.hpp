#ifndef MATHLIB_COMMON_IMPL_TRAITS_HPP
#define MATHLIB_COMMON_IMPL_TRAITS_HPP

namespace Math::Implementation
{
    template <typename Specialization, template <typename...> typename Base>
    struct IsSpecialization
    {
        static constexpr bool Value = false;
    };

    template <template<typename...> typename Specialization, typename... Args>
    struct IsSpecialization<Specialization<Args...>, Specialization>
    {
        static constexpr bool Value = true;
    };
}

#endif //MATHLIB_COMMON_IMPL_TRAITS_HPP

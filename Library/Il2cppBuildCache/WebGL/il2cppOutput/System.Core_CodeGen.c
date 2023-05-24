#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 System.Exception System.Linq.Error::ArgumentNull(System.String)
extern void Error_ArgumentNull_mC405D19505CA250B5C731803400D8DAF963F0DCD (void);
// 0x00000002 System.Exception System.Linq.Error::MoreThanOneMatch()
extern void Error_MoreThanOneMatch_mEC48ECB89552B91EFD9669763848BA1DB97E991D (void);
// 0x00000003 System.Exception System.Linq.Error::NoElements()
extern void Error_NoElements_mE25C4D4F2FE86A32704624613D751BE305953E49 (void);
// 0x00000004 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Where(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000005 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
// 0x00000006 System.Func`2<TSource,System.Boolean> System.Linq.Enumerable::CombinePredicates(System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,System.Boolean>)
// 0x00000007 System.Func`2<TSource,TResult> System.Linq.Enumerable::CombineSelectors(System.Func`2<TSource,TMiddle>,System.Func`2<TMiddle,TResult>)
// 0x00000008 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::SelectMany(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Collections.Generic.IEnumerable`1<TResult>>)
// 0x00000009 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::SelectManyIterator(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Collections.Generic.IEnumerable`1<TResult>>)
// 0x0000000A System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Distinct(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000000B System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::DistinctIterator(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEqualityComparer`1<TSource>)
// 0x0000000C System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Except(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000000D System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::ExceptIterator(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEqualityComparer`1<TSource>)
// 0x0000000E System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Reverse(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000000F System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::ReverseIterator(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000010 System.Boolean System.Linq.Enumerable::SequenceEqual(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000011 System.Boolean System.Linq.Enumerable::SequenceEqual(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEqualityComparer`1<TSource>)
// 0x00000012 TSource[] System.Linq.Enumerable::ToArray(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000013 System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000014 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Cast(System.Collections.IEnumerable)
// 0x00000015 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::CastIterator(System.Collections.IEnumerable)
// 0x00000016 TSource System.Linq.Enumerable::First(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000017 TSource System.Linq.Enumerable::FirstOrDefault(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000018 TSource System.Linq.Enumerable::FirstOrDefault(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000019 TSource System.Linq.Enumerable::Last(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000001A TSource System.Linq.Enumerable::LastOrDefault(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000001B TSource System.Linq.Enumerable::SingleOrDefault(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x0000001C System.Boolean System.Linq.Enumerable::Any(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000001D System.Boolean System.Linq.Enumerable::Any(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x0000001E System.Int32 System.Linq.Enumerable::Count(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000001F System.Boolean System.Linq.Enumerable::Contains(System.Collections.Generic.IEnumerable`1<TSource>,TSource)
// 0x00000020 System.Boolean System.Linq.Enumerable::Contains(System.Collections.Generic.IEnumerable`1<TSource>,TSource,System.Collections.Generic.IEqualityComparer`1<TSource>)
// 0x00000021 System.Int32 System.Linq.Enumerable::Sum(System.Collections.Generic.IEnumerable`1<System.Int32>)
extern void Enumerable_Sum_mCC08CB5DDD498532C9E9D72D8132EFE5B8E034FD (void);
// 0x00000022 System.Int32 System.Linq.Enumerable::Sum(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Int32>)
// 0x00000023 System.Int32 System.Linq.Enumerable::Max(System.Collections.Generic.IEnumerable`1<System.Int32>)
extern void Enumerable_Max_mDCF86A7A86D2A183D045F007906336B3D989B46C (void);
// 0x00000024 System.Int32 System.Linq.Enumerable::Max(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Int32>)
// 0x00000025 System.Void System.Linq.Enumerable/Iterator`1::.ctor()
// 0x00000026 TSource System.Linq.Enumerable/Iterator`1::get_Current()
// 0x00000027 System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/Iterator`1::Clone()
// 0x00000028 System.Void System.Linq.Enumerable/Iterator`1::Dispose()
// 0x00000029 System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/Iterator`1::GetEnumerator()
// 0x0000002A System.Boolean System.Linq.Enumerable/Iterator`1::MoveNext()
// 0x0000002B System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/Iterator`1::Select(System.Func`2<TSource,TResult>)
// 0x0000002C System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/Iterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x0000002D System.Object System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerator.get_Current()
// 0x0000002E System.Collections.IEnumerator System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerable.GetEnumerator()
// 0x0000002F System.Void System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerator.Reset()
// 0x00000030 System.Void System.Linq.Enumerable/WhereEnumerableIterator`1::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000031 System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::Clone()
// 0x00000032 System.Void System.Linq.Enumerable/WhereEnumerableIterator`1::Dispose()
// 0x00000033 System.Boolean System.Linq.Enumerable/WhereEnumerableIterator`1::MoveNext()
// 0x00000034 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereEnumerableIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x00000035 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000036 System.Void System.Linq.Enumerable/WhereArrayIterator`1::.ctor(TSource[],System.Func`2<TSource,System.Boolean>)
// 0x00000037 System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1::Clone()
// 0x00000038 System.Boolean System.Linq.Enumerable/WhereArrayIterator`1::MoveNext()
// 0x00000039 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereArrayIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x0000003A System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x0000003B System.Void System.Linq.Enumerable/WhereListIterator`1::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x0000003C System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereListIterator`1::Clone()
// 0x0000003D System.Boolean System.Linq.Enumerable/WhereListIterator`1::MoveNext()
// 0x0000003E System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereListIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x0000003F System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereListIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000040 System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x00000041 System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Clone()
// 0x00000042 System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Dispose()
// 0x00000043 System.Boolean System.Linq.Enumerable/WhereSelectEnumerableIterator`2::MoveNext()
// 0x00000044 System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x00000045 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x00000046 System.Void System.Linq.Enumerable/WhereSelectArrayIterator`2::.ctor(TSource[],System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x00000047 System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::Clone()
// 0x00000048 System.Boolean System.Linq.Enumerable/WhereSelectArrayIterator`2::MoveNext()
// 0x00000049 System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectArrayIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x0000004A System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x0000004B System.Void System.Linq.Enumerable/WhereSelectListIterator`2::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x0000004C System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2::Clone()
// 0x0000004D System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2::MoveNext()
// 0x0000004E System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectListIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x0000004F System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x00000050 System.Void System.Linq.Enumerable/<>c__DisplayClass6_0`1::.ctor()
// 0x00000051 System.Boolean System.Linq.Enumerable/<>c__DisplayClass6_0`1::<CombinePredicates>b__0(TSource)
// 0x00000052 System.Void System.Linq.Enumerable/<>c__DisplayClass7_0`3::.ctor()
// 0x00000053 TResult System.Linq.Enumerable/<>c__DisplayClass7_0`3::<CombineSelectors>b__0(TSource)
// 0x00000054 System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::.ctor(System.Int32)
// 0x00000055 System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.IDisposable.Dispose()
// 0x00000056 System.Boolean System.Linq.Enumerable/<SelectManyIterator>d__17`2::MoveNext()
// 0x00000057 System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::<>m__Finally1()
// 0x00000058 System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::<>m__Finally2()
// 0x00000059 TResult System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.Generic.IEnumerator<TResult>.get_Current()
// 0x0000005A System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.IEnumerator.Reset()
// 0x0000005B System.Object System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.IEnumerator.get_Current()
// 0x0000005C System.Collections.Generic.IEnumerator`1<TResult> System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.Generic.IEnumerable<TResult>.GetEnumerator()
// 0x0000005D System.Collections.IEnumerator System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.IEnumerable.GetEnumerator()
// 0x0000005E System.Void System.Linq.Enumerable/<DistinctIterator>d__68`1::.ctor(System.Int32)
// 0x0000005F System.Void System.Linq.Enumerable/<DistinctIterator>d__68`1::System.IDisposable.Dispose()
// 0x00000060 System.Boolean System.Linq.Enumerable/<DistinctIterator>d__68`1::MoveNext()
// 0x00000061 System.Void System.Linq.Enumerable/<DistinctIterator>d__68`1::<>m__Finally1()
// 0x00000062 TSource System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.Generic.IEnumerator<TSource>.get_Current()
// 0x00000063 System.Void System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.IEnumerator.Reset()
// 0x00000064 System.Object System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.IEnumerator.get_Current()
// 0x00000065 System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.Generic.IEnumerable<TSource>.GetEnumerator()
// 0x00000066 System.Collections.IEnumerator System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000067 System.Void System.Linq.Enumerable/<ExceptIterator>d__77`1::.ctor(System.Int32)
// 0x00000068 System.Void System.Linq.Enumerable/<ExceptIterator>d__77`1::System.IDisposable.Dispose()
// 0x00000069 System.Boolean System.Linq.Enumerable/<ExceptIterator>d__77`1::MoveNext()
// 0x0000006A System.Void System.Linq.Enumerable/<ExceptIterator>d__77`1::<>m__Finally1()
// 0x0000006B TSource System.Linq.Enumerable/<ExceptIterator>d__77`1::System.Collections.Generic.IEnumerator<TSource>.get_Current()
// 0x0000006C System.Void System.Linq.Enumerable/<ExceptIterator>d__77`1::System.Collections.IEnumerator.Reset()
// 0x0000006D System.Object System.Linq.Enumerable/<ExceptIterator>d__77`1::System.Collections.IEnumerator.get_Current()
// 0x0000006E System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/<ExceptIterator>d__77`1::System.Collections.Generic.IEnumerable<TSource>.GetEnumerator()
// 0x0000006F System.Collections.IEnumerator System.Linq.Enumerable/<ExceptIterator>d__77`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000070 System.Void System.Linq.Enumerable/<ReverseIterator>d__79`1::.ctor(System.Int32)
// 0x00000071 System.Void System.Linq.Enumerable/<ReverseIterator>d__79`1::System.IDisposable.Dispose()
// 0x00000072 System.Boolean System.Linq.Enumerable/<ReverseIterator>d__79`1::MoveNext()
// 0x00000073 TSource System.Linq.Enumerable/<ReverseIterator>d__79`1::System.Collections.Generic.IEnumerator<TSource>.get_Current()
// 0x00000074 System.Void System.Linq.Enumerable/<ReverseIterator>d__79`1::System.Collections.IEnumerator.Reset()
// 0x00000075 System.Object System.Linq.Enumerable/<ReverseIterator>d__79`1::System.Collections.IEnumerator.get_Current()
// 0x00000076 System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/<ReverseIterator>d__79`1::System.Collections.Generic.IEnumerable<TSource>.GetEnumerator()
// 0x00000077 System.Collections.IEnumerator System.Linq.Enumerable/<ReverseIterator>d__79`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000078 System.Void System.Linq.Enumerable/<CastIterator>d__99`1::.ctor(System.Int32)
// 0x00000079 System.Void System.Linq.Enumerable/<CastIterator>d__99`1::System.IDisposable.Dispose()
// 0x0000007A System.Boolean System.Linq.Enumerable/<CastIterator>d__99`1::MoveNext()
// 0x0000007B System.Void System.Linq.Enumerable/<CastIterator>d__99`1::<>m__Finally1()
// 0x0000007C TResult System.Linq.Enumerable/<CastIterator>d__99`1::System.Collections.Generic.IEnumerator<TResult>.get_Current()
// 0x0000007D System.Void System.Linq.Enumerable/<CastIterator>d__99`1::System.Collections.IEnumerator.Reset()
// 0x0000007E System.Object System.Linq.Enumerable/<CastIterator>d__99`1::System.Collections.IEnumerator.get_Current()
// 0x0000007F System.Collections.Generic.IEnumerator`1<TResult> System.Linq.Enumerable/<CastIterator>d__99`1::System.Collections.Generic.IEnumerable<TResult>.GetEnumerator()
// 0x00000080 System.Collections.IEnumerator System.Linq.Enumerable/<CastIterator>d__99`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000081 System.Void System.Linq.Set`1::.ctor(System.Collections.Generic.IEqualityComparer`1<TElement>)
// 0x00000082 System.Boolean System.Linq.Set`1::Add(TElement)
// 0x00000083 System.Boolean System.Linq.Set`1::Find(TElement,System.Boolean)
// 0x00000084 System.Void System.Linq.Set`1::Resize()
// 0x00000085 System.Int32 System.Linq.Set`1::InternalGetHashCode(TElement)
// 0x00000086 System.Void System.Linq.Buffer`1::.ctor(System.Collections.Generic.IEnumerable`1<TElement>)
// 0x00000087 TElement[] System.Linq.Buffer`1::ToArray()
// 0x00000088 System.Void System.Collections.Generic.HashSet`1::.ctor()
// 0x00000089 System.Void System.Collections.Generic.HashSet`1::.ctor(System.Collections.Generic.IEqualityComparer`1<T>)
// 0x0000008A System.Void System.Collections.Generic.HashSet`1::.ctor(System.Collections.Generic.IEnumerable`1<T>)
// 0x0000008B System.Void System.Collections.Generic.HashSet`1::.ctor(System.Collections.Generic.IEnumerable`1<T>,System.Collections.Generic.IEqualityComparer`1<T>)
// 0x0000008C System.Void System.Collections.Generic.HashSet`1::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// 0x0000008D System.Void System.Collections.Generic.HashSet`1::CopyFrom(System.Collections.Generic.HashSet`1<T>)
// 0x0000008E System.Void System.Collections.Generic.HashSet`1::System.Collections.Generic.ICollection<T>.Add(T)
// 0x0000008F System.Void System.Collections.Generic.HashSet`1::Clear()
// 0x00000090 System.Boolean System.Collections.Generic.HashSet`1::Contains(T)
// 0x00000091 System.Void System.Collections.Generic.HashSet`1::CopyTo(T[],System.Int32)
// 0x00000092 System.Boolean System.Collections.Generic.HashSet`1::Remove(T)
// 0x00000093 System.Int32 System.Collections.Generic.HashSet`1::get_Count()
// 0x00000094 System.Boolean System.Collections.Generic.HashSet`1::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
// 0x00000095 System.Collections.Generic.HashSet`1/Enumerator<T> System.Collections.Generic.HashSet`1::GetEnumerator()
// 0x00000096 System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.HashSet`1::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
// 0x00000097 System.Collections.IEnumerator System.Collections.Generic.HashSet`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000098 System.Void System.Collections.Generic.HashSet`1::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// 0x00000099 System.Void System.Collections.Generic.HashSet`1::OnDeserialization(System.Object)
// 0x0000009A System.Boolean System.Collections.Generic.HashSet`1::Add(T)
// 0x0000009B System.Void System.Collections.Generic.HashSet`1::UnionWith(System.Collections.Generic.IEnumerable`1<T>)
// 0x0000009C System.Void System.Collections.Generic.HashSet`1::ExceptWith(System.Collections.Generic.IEnumerable`1<T>)
// 0x0000009D System.Void System.Collections.Generic.HashSet`1::CopyTo(T[])
// 0x0000009E System.Void System.Collections.Generic.HashSet`1::CopyTo(T[],System.Int32,System.Int32)
// 0x0000009F System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1::get_Comparer()
// 0x000000A0 System.Void System.Collections.Generic.HashSet`1::TrimExcess()
// 0x000000A1 System.Void System.Collections.Generic.HashSet`1::Initialize(System.Int32)
// 0x000000A2 System.Void System.Collections.Generic.HashSet`1::IncreaseCapacity()
// 0x000000A3 System.Void System.Collections.Generic.HashSet`1::SetCapacity(System.Int32)
// 0x000000A4 System.Boolean System.Collections.Generic.HashSet`1::AddIfNotPresent(T)
// 0x000000A5 System.Void System.Collections.Generic.HashSet`1::AddValue(System.Int32,System.Int32,T)
// 0x000000A6 System.Boolean System.Collections.Generic.HashSet`1::AreEqualityComparersEqual(System.Collections.Generic.HashSet`1<T>,System.Collections.Generic.HashSet`1<T>)
// 0x000000A7 System.Int32 System.Collections.Generic.HashSet`1::InternalGetHashCode(T)
// 0x000000A8 System.Void System.Collections.Generic.HashSet`1/Enumerator::.ctor(System.Collections.Generic.HashSet`1<T>)
// 0x000000A9 System.Void System.Collections.Generic.HashSet`1/Enumerator::Dispose()
// 0x000000AA System.Boolean System.Collections.Generic.HashSet`1/Enumerator::MoveNext()
// 0x000000AB T System.Collections.Generic.HashSet`1/Enumerator::get_Current()
// 0x000000AC System.Object System.Collections.Generic.HashSet`1/Enumerator::System.Collections.IEnumerator.get_Current()
// 0x000000AD System.Void System.Collections.Generic.HashSet`1/Enumerator::System.Collections.IEnumerator.Reset()
static Il2CppMethodPointer s_methodPointers[173] = 
{
	Error_ArgumentNull_mC405D19505CA250B5C731803400D8DAF963F0DCD,
	Error_MoreThanOneMatch_mEC48ECB89552B91EFD9669763848BA1DB97E991D,
	Error_NoElements_mE25C4D4F2FE86A32704624613D751BE305953E49,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	Enumerable_Sum_mCC08CB5DDD498532C9E9D72D8132EFE5B8E034FD,
	NULL,
	Enumerable_Max_mDCF86A7A86D2A183D045F007906336B3D989B46C,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
};
static const int32_t s_InvokerIndices[173] = 
{
	2877,
	3012,
	3012,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	2831,
	-1,
	2831,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
};
static const Il2CppTokenRangePair s_rgctxIndices[55] = 
{
	{ 0x02000004, { 94, 4 } },
	{ 0x02000005, { 98, 9 } },
	{ 0x02000006, { 109, 7 } },
	{ 0x02000007, { 118, 10 } },
	{ 0x02000008, { 130, 11 } },
	{ 0x02000009, { 144, 9 } },
	{ 0x0200000A, { 156, 12 } },
	{ 0x0200000B, { 171, 1 } },
	{ 0x0200000C, { 172, 2 } },
	{ 0x0200000D, { 174, 12 } },
	{ 0x0200000E, { 186, 11 } },
	{ 0x0200000F, { 197, 11 } },
	{ 0x02000010, { 208, 6 } },
	{ 0x02000011, { 214, 6 } },
	{ 0x02000012, { 220, 8 } },
	{ 0x02000014, { 228, 4 } },
	{ 0x02000015, { 232, 36 } },
	{ 0x02000017, { 268, 2 } },
	{ 0x06000004, { 0, 10 } },
	{ 0x06000005, { 10, 10 } },
	{ 0x06000006, { 20, 5 } },
	{ 0x06000007, { 25, 5 } },
	{ 0x06000008, { 30, 1 } },
	{ 0x06000009, { 31, 2 } },
	{ 0x0600000A, { 33, 1 } },
	{ 0x0600000B, { 34, 2 } },
	{ 0x0600000C, { 36, 1 } },
	{ 0x0600000D, { 37, 2 } },
	{ 0x0600000E, { 39, 1 } },
	{ 0x0600000F, { 40, 2 } },
	{ 0x06000010, { 42, 1 } },
	{ 0x06000011, { 43, 5 } },
	{ 0x06000012, { 48, 3 } },
	{ 0x06000013, { 51, 2 } },
	{ 0x06000014, { 53, 2 } },
	{ 0x06000015, { 55, 2 } },
	{ 0x06000016, { 57, 4 } },
	{ 0x06000017, { 61, 4 } },
	{ 0x06000018, { 65, 3 } },
	{ 0x06000019, { 68, 4 } },
	{ 0x0600001A, { 72, 4 } },
	{ 0x0600001B, { 76, 3 } },
	{ 0x0600001C, { 79, 1 } },
	{ 0x0600001D, { 80, 3 } },
	{ 0x0600001E, { 83, 2 } },
	{ 0x0600001F, { 85, 2 } },
	{ 0x06000020, { 87, 5 } },
	{ 0x06000022, { 92, 1 } },
	{ 0x06000024, { 93, 1 } },
	{ 0x06000034, { 107, 2 } },
	{ 0x06000039, { 116, 2 } },
	{ 0x0600003E, { 128, 2 } },
	{ 0x06000044, { 141, 3 } },
	{ 0x06000049, { 153, 3 } },
	{ 0x0600004E, { 168, 3 } },
};
static const Il2CppRGCTXDefinition s_rgctxValues[270] = 
{
	{ (Il2CppRGCTXDataType)2, 1558 },
	{ (Il2CppRGCTXDataType)3, 6249 },
	{ (Il2CppRGCTXDataType)2, 2420 },
	{ (Il2CppRGCTXDataType)2, 2090 },
	{ (Il2CppRGCTXDataType)3, 10753 },
	{ (Il2CppRGCTXDataType)2, 1649 },
	{ (Il2CppRGCTXDataType)2, 2097 },
	{ (Il2CppRGCTXDataType)3, 10851 },
	{ (Il2CppRGCTXDataType)2, 2092 },
	{ (Il2CppRGCTXDataType)3, 10786 },
	{ (Il2CppRGCTXDataType)2, 1559 },
	{ (Il2CppRGCTXDataType)3, 6250 },
	{ (Il2CppRGCTXDataType)2, 2440 },
	{ (Il2CppRGCTXDataType)2, 2099 },
	{ (Il2CppRGCTXDataType)3, 10884 },
	{ (Il2CppRGCTXDataType)2, 1666 },
	{ (Il2CppRGCTXDataType)2, 2107 },
	{ (Il2CppRGCTXDataType)3, 11284 },
	{ (Il2CppRGCTXDataType)2, 2103 },
	{ (Il2CppRGCTXDataType)3, 11067 },
	{ (Il2CppRGCTXDataType)2, 509 },
	{ (Il2CppRGCTXDataType)3, 37 },
	{ (Il2CppRGCTXDataType)3, 38 },
	{ (Il2CppRGCTXDataType)2, 887 },
	{ (Il2CppRGCTXDataType)3, 4666 },
	{ (Il2CppRGCTXDataType)2, 510 },
	{ (Il2CppRGCTXDataType)3, 57 },
	{ (Il2CppRGCTXDataType)3, 58 },
	{ (Il2CppRGCTXDataType)2, 899 },
	{ (Il2CppRGCTXDataType)3, 4671 },
	{ (Il2CppRGCTXDataType)3, 13356 },
	{ (Il2CppRGCTXDataType)2, 523 },
	{ (Il2CppRGCTXDataType)3, 305 },
	{ (Il2CppRGCTXDataType)3, 13284 },
	{ (Il2CppRGCTXDataType)2, 513 },
	{ (Il2CppRGCTXDataType)3, 200 },
	{ (Il2CppRGCTXDataType)3, 13291 },
	{ (Il2CppRGCTXDataType)2, 517 },
	{ (Il2CppRGCTXDataType)3, 252 },
	{ (Il2CppRGCTXDataType)3, 13312 },
	{ (Il2CppRGCTXDataType)2, 521 },
	{ (Il2CppRGCTXDataType)3, 286 },
	{ (Il2CppRGCTXDataType)3, 13367 },
	{ (Il2CppRGCTXDataType)3, 4231 },
	{ (Il2CppRGCTXDataType)2, 804 },
	{ (Il2CppRGCTXDataType)2, 1164 },
	{ (Il2CppRGCTXDataType)2, 1279 },
	{ (Il2CppRGCTXDataType)2, 1361 },
	{ (Il2CppRGCTXDataType)2, 571 },
	{ (Il2CppRGCTXDataType)3, 925 },
	{ (Il2CppRGCTXDataType)3, 926 },
	{ (Il2CppRGCTXDataType)2, 1650 },
	{ (Il2CppRGCTXDataType)3, 6949 },
	{ (Il2CppRGCTXDataType)2, 1165 },
	{ (Il2CppRGCTXDataType)3, 13182 },
	{ (Il2CppRGCTXDataType)2, 511 },
	{ (Il2CppRGCTXDataType)3, 177 },
	{ (Il2CppRGCTXDataType)2, 1465 },
	{ (Il2CppRGCTXDataType)2, 1066 },
	{ (Il2CppRGCTXDataType)2, 1178 },
	{ (Il2CppRGCTXDataType)2, 1280 },
	{ (Il2CppRGCTXDataType)2, 1466 },
	{ (Il2CppRGCTXDataType)2, 1067 },
	{ (Il2CppRGCTXDataType)2, 1179 },
	{ (Il2CppRGCTXDataType)2, 1281 },
	{ (Il2CppRGCTXDataType)2, 1180 },
	{ (Il2CppRGCTXDataType)2, 1282 },
	{ (Il2CppRGCTXDataType)3, 4667 },
	{ (Il2CppRGCTXDataType)2, 1467 },
	{ (Il2CppRGCTXDataType)2, 1068 },
	{ (Il2CppRGCTXDataType)2, 1181 },
	{ (Il2CppRGCTXDataType)2, 1283 },
	{ (Il2CppRGCTXDataType)2, 1468 },
	{ (Il2CppRGCTXDataType)2, 1069 },
	{ (Il2CppRGCTXDataType)2, 1182 },
	{ (Il2CppRGCTXDataType)2, 1284 },
	{ (Il2CppRGCTXDataType)2, 1183 },
	{ (Il2CppRGCTXDataType)2, 1285 },
	{ (Il2CppRGCTXDataType)3, 4668 },
	{ (Il2CppRGCTXDataType)2, 1159 },
	{ (Il2CppRGCTXDataType)2, 1160 },
	{ (Il2CppRGCTXDataType)2, 1277 },
	{ (Il2CppRGCTXDataType)3, 4665 },
	{ (Il2CppRGCTXDataType)2, 1065 },
	{ (Il2CppRGCTXDataType)2, 1175 },
	{ (Il2CppRGCTXDataType)2, 1064 },
	{ (Il2CppRGCTXDataType)3, 13264 },
	{ (Il2CppRGCTXDataType)3, 4230 },
	{ (Il2CppRGCTXDataType)2, 803 },
	{ (Il2CppRGCTXDataType)2, 1162 },
	{ (Il2CppRGCTXDataType)2, 1278 },
	{ (Il2CppRGCTXDataType)2, 1360 },
	{ (Il2CppRGCTXDataType)3, 13317 },
	{ (Il2CppRGCTXDataType)3, 13316 },
	{ (Il2CppRGCTXDataType)3, 6251 },
	{ (Il2CppRGCTXDataType)3, 6253 },
	{ (Il2CppRGCTXDataType)2, 358 },
	{ (Il2CppRGCTXDataType)3, 6252 },
	{ (Il2CppRGCTXDataType)3, 6261 },
	{ (Il2CppRGCTXDataType)2, 1562 },
	{ (Il2CppRGCTXDataType)2, 2093 },
	{ (Il2CppRGCTXDataType)3, 10787 },
	{ (Il2CppRGCTXDataType)3, 6262 },
	{ (Il2CppRGCTXDataType)2, 1228 },
	{ (Il2CppRGCTXDataType)2, 1312 },
	{ (Il2CppRGCTXDataType)3, 4678 },
	{ (Il2CppRGCTXDataType)3, 13186 },
	{ (Il2CppRGCTXDataType)2, 2104 },
	{ (Il2CppRGCTXDataType)3, 11068 },
	{ (Il2CppRGCTXDataType)3, 6254 },
	{ (Il2CppRGCTXDataType)2, 1561 },
	{ (Il2CppRGCTXDataType)2, 2091 },
	{ (Il2CppRGCTXDataType)3, 10754 },
	{ (Il2CppRGCTXDataType)3, 4677 },
	{ (Il2CppRGCTXDataType)3, 6255 },
	{ (Il2CppRGCTXDataType)3, 13185 },
	{ (Il2CppRGCTXDataType)2, 2100 },
	{ (Il2CppRGCTXDataType)3, 10885 },
	{ (Il2CppRGCTXDataType)3, 6268 },
	{ (Il2CppRGCTXDataType)2, 1563 },
	{ (Il2CppRGCTXDataType)2, 2098 },
	{ (Il2CppRGCTXDataType)3, 10852 },
	{ (Il2CppRGCTXDataType)3, 6991 },
	{ (Il2CppRGCTXDataType)3, 3333 },
	{ (Il2CppRGCTXDataType)3, 4679 },
	{ (Il2CppRGCTXDataType)3, 3332 },
	{ (Il2CppRGCTXDataType)3, 6269 },
	{ (Il2CppRGCTXDataType)3, 13187 },
	{ (Il2CppRGCTXDataType)2, 2108 },
	{ (Il2CppRGCTXDataType)3, 11285 },
	{ (Il2CppRGCTXDataType)3, 6282 },
	{ (Il2CppRGCTXDataType)2, 1565 },
	{ (Il2CppRGCTXDataType)2, 2106 },
	{ (Il2CppRGCTXDataType)3, 11070 },
	{ (Il2CppRGCTXDataType)3, 6283 },
	{ (Il2CppRGCTXDataType)2, 1231 },
	{ (Il2CppRGCTXDataType)2, 1315 },
	{ (Il2CppRGCTXDataType)3, 4683 },
	{ (Il2CppRGCTXDataType)3, 4682 },
	{ (Il2CppRGCTXDataType)2, 2095 },
	{ (Il2CppRGCTXDataType)3, 10789 },
	{ (Il2CppRGCTXDataType)3, 13198 },
	{ (Il2CppRGCTXDataType)2, 2105 },
	{ (Il2CppRGCTXDataType)3, 11069 },
	{ (Il2CppRGCTXDataType)3, 6275 },
	{ (Il2CppRGCTXDataType)2, 1564 },
	{ (Il2CppRGCTXDataType)2, 2102 },
	{ (Il2CppRGCTXDataType)3, 10887 },
	{ (Il2CppRGCTXDataType)3, 4681 },
	{ (Il2CppRGCTXDataType)3, 4680 },
	{ (Il2CppRGCTXDataType)3, 6276 },
	{ (Il2CppRGCTXDataType)2, 2094 },
	{ (Il2CppRGCTXDataType)3, 10788 },
	{ (Il2CppRGCTXDataType)3, 13197 },
	{ (Il2CppRGCTXDataType)2, 2101 },
	{ (Il2CppRGCTXDataType)3, 10886 },
	{ (Il2CppRGCTXDataType)3, 6289 },
	{ (Il2CppRGCTXDataType)2, 1566 },
	{ (Il2CppRGCTXDataType)2, 2110 },
	{ (Il2CppRGCTXDataType)3, 11287 },
	{ (Il2CppRGCTXDataType)3, 6992 },
	{ (Il2CppRGCTXDataType)3, 3335 },
	{ (Il2CppRGCTXDataType)3, 4685 },
	{ (Il2CppRGCTXDataType)3, 4684 },
	{ (Il2CppRGCTXDataType)3, 3334 },
	{ (Il2CppRGCTXDataType)3, 6290 },
	{ (Il2CppRGCTXDataType)2, 2096 },
	{ (Il2CppRGCTXDataType)3, 10790 },
	{ (Il2CppRGCTXDataType)3, 13199 },
	{ (Il2CppRGCTXDataType)2, 2109 },
	{ (Il2CppRGCTXDataType)3, 11286 },
	{ (Il2CppRGCTXDataType)3, 4674 },
	{ (Il2CppRGCTXDataType)3, 4675 },
	{ (Il2CppRGCTXDataType)3, 4686 },
	{ (Il2CppRGCTXDataType)3, 308 },
	{ (Il2CppRGCTXDataType)3, 307 },
	{ (Il2CppRGCTXDataType)2, 1223 },
	{ (Il2CppRGCTXDataType)2, 1308 },
	{ (Il2CppRGCTXDataType)3, 4676 },
	{ (Il2CppRGCTXDataType)2, 1238 },
	{ (Il2CppRGCTXDataType)2, 1326 },
	{ (Il2CppRGCTXDataType)3, 310 },
	{ (Il2CppRGCTXDataType)2, 466 },
	{ (Il2CppRGCTXDataType)2, 524 },
	{ (Il2CppRGCTXDataType)3, 306 },
	{ (Il2CppRGCTXDataType)3, 309 },
	{ (Il2CppRGCTXDataType)3, 202 },
	{ (Il2CppRGCTXDataType)2, 1959 },
	{ (Il2CppRGCTXDataType)3, 9999 },
	{ (Il2CppRGCTXDataType)2, 1214 },
	{ (Il2CppRGCTXDataType)2, 1303 },
	{ (Il2CppRGCTXDataType)3, 10000 },
	{ (Il2CppRGCTXDataType)3, 204 },
	{ (Il2CppRGCTXDataType)2, 351 },
	{ (Il2CppRGCTXDataType)2, 514 },
	{ (Il2CppRGCTXDataType)3, 201 },
	{ (Il2CppRGCTXDataType)3, 203 },
	{ (Il2CppRGCTXDataType)3, 254 },
	{ (Il2CppRGCTXDataType)2, 1961 },
	{ (Il2CppRGCTXDataType)3, 10001 },
	{ (Il2CppRGCTXDataType)2, 1217 },
	{ (Il2CppRGCTXDataType)2, 1305 },
	{ (Il2CppRGCTXDataType)3, 10002 },
	{ (Il2CppRGCTXDataType)3, 256 },
	{ (Il2CppRGCTXDataType)2, 353 },
	{ (Il2CppRGCTXDataType)2, 518 },
	{ (Il2CppRGCTXDataType)3, 253 },
	{ (Il2CppRGCTXDataType)3, 255 },
	{ (Il2CppRGCTXDataType)2, 572 },
	{ (Il2CppRGCTXDataType)3, 927 },
	{ (Il2CppRGCTXDataType)2, 355 },
	{ (Il2CppRGCTXDataType)2, 522 },
	{ (Il2CppRGCTXDataType)3, 287 },
	{ (Il2CppRGCTXDataType)3, 288 },
	{ (Il2CppRGCTXDataType)3, 179 },
	{ (Il2CppRGCTXDataType)2, 349 },
	{ (Il2CppRGCTXDataType)3, 181 },
	{ (Il2CppRGCTXDataType)2, 512 },
	{ (Il2CppRGCTXDataType)3, 178 },
	{ (Il2CppRGCTXDataType)3, 180 },
	{ (Il2CppRGCTXDataType)3, 4264 },
	{ (Il2CppRGCTXDataType)2, 818 },
	{ (Il2CppRGCTXDataType)2, 2504 },
	{ (Il2CppRGCTXDataType)3, 9996 },
	{ (Il2CppRGCTXDataType)3, 9997 },
	{ (Il2CppRGCTXDataType)2, 1376 },
	{ (Il2CppRGCTXDataType)3, 9998 },
	{ (Il2CppRGCTXDataType)2, 300 },
	{ (Il2CppRGCTXDataType)2, 1071 },
	{ (Il2CppRGCTXDataType)2, 2443 },
	{ (Il2CppRGCTXDataType)2, 1196 },
	{ (Il2CppRGCTXDataType)2, 1286 },
	{ (Il2CppRGCTXDataType)3, 4247 },
	{ (Il2CppRGCTXDataType)2, 812 },
	{ (Il2CppRGCTXDataType)3, 5117 },
	{ (Il2CppRGCTXDataType)3, 5118 },
	{ (Il2CppRGCTXDataType)2, 1038 },
	{ (Il2CppRGCTXDataType)3, 5121 },
	{ (Il2CppRGCTXDataType)2, 1038 },
	{ (Il2CppRGCTXDataType)3, 5123 },
	{ (Il2CppRGCTXDataType)2, 1072 },
	{ (Il2CppRGCTXDataType)3, 5127 },
	{ (Il2CppRGCTXDataType)3, 5132 },
	{ (Il2CppRGCTXDataType)3, 5131 },
	{ (Il2CppRGCTXDataType)2, 2502 },
	{ (Il2CppRGCTXDataType)3, 5120 },
	{ (Il2CppRGCTXDataType)3, 5119 },
	{ (Il2CppRGCTXDataType)3, 5128 },
	{ (Il2CppRGCTXDataType)2, 1371 },
	{ (Il2CppRGCTXDataType)3, 5125 },
	{ (Il2CppRGCTXDataType)3, 13670 },
	{ (Il2CppRGCTXDataType)2, 788 },
	{ (Il2CppRGCTXDataType)3, 3326 },
	{ (Il2CppRGCTXDataType)1, 1145 },
	{ (Il2CppRGCTXDataType)2, 2449 },
	{ (Il2CppRGCTXDataType)3, 5124 },
	{ (Il2CppRGCTXDataType)1, 2449 },
	{ (Il2CppRGCTXDataType)1, 1371 },
	{ (Il2CppRGCTXDataType)2, 2502 },
	{ (Il2CppRGCTXDataType)2, 2449 },
	{ (Il2CppRGCTXDataType)2, 1199 },
	{ (Il2CppRGCTXDataType)2, 1289 },
	{ (Il2CppRGCTXDataType)3, 5122 },
	{ (Il2CppRGCTXDataType)3, 5129 },
	{ (Il2CppRGCTXDataType)3, 5130 },
	{ (Il2CppRGCTXDataType)3, 5126 },
	{ (Il2CppRGCTXDataType)3, 5133 },
	{ (Il2CppRGCTXDataType)2, 251 },
	{ (Il2CppRGCTXDataType)3, 3336 },
	{ (Il2CppRGCTXDataType)2, 369 },
};
extern const CustomAttributesCacheGenerator g_System_Core_AttributeGenerators[];
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_System_Core_CodeGenModule;
const Il2CppCodeGenModule g_System_Core_CodeGenModule = 
{
	"System.Core.dll",
	173,
	s_methodPointers,
	0,
	NULL,
	s_InvokerIndices,
	0,
	NULL,
	55,
	s_rgctxIndices,
	270,
	s_rgctxValues,
	NULL,
	g_System_Core_AttributeGenerators,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};

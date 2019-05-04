#pragma once

inline const void **getvtable( const void *inst, size_t offset = 0 ) {
  return *reinterpret_cast<const void ** *>( ( size_t )inst + offset );
}

template< typename Fn >
inline Fn getvfunc( const void *inst, size_t index, size_t offset = 0 ) {
  return reinterpret_cast<Fn>( getvtable( inst, offset )[ index ] );
}


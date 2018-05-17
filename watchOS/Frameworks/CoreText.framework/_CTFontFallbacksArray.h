//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSArray.h"

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface _CTFontFallbacksArray : NSArray
{
    struct TUnfairLock _lock;
    // Error parsing type: r^{TBaseFont=^^?{atomic<int>=Ai}{TCFRef<const __CFData *>={TAtomicPtr<const __CFData *>=A^{__CFData}}}{TCFRef<const __CFData *>={TAtomicPtr<const __CFData *>=A^{__CFData}}}{TCFRef<const __CFData *>={TAtomicPtr<const __CFData *>=A^{__CFData}}}{TCFRef<const __CFData *>={TAtomicPtr<const __CFData *>=A^{__CFData}}}{TCFRef<const __CFData *>={TAtomicPtr<const __CFData *>=A^{__CFData}}}{TCFRef<const __CFData *>={TAtomicPtr<const __CFData *>=A^{__CFData}}}{TCFRef<const __CFData *>={TAtomicPtr<const __CFData *>=A^{__CFData}}}{TCFRef<const __CFData *>={TAtomicPtr<const __CFData *>=A^{__CFData}}}{TCFRef<const __CFData *>={TAtomicPtr<const __CFData *>=A^{__CFData}}}{TCFRef<const __CFURL *>={TAtomicPtr<const __CFURL *>=A^{__CFURL}}}{TCFRef<CGFont *>={TAtomicPtr<CGFont *>=A^{CGFont}}}{TUnfairLock={os_unfair_lock_s=I}}{TCFRef<__CFDictionary *>={TAtomicPtr<__CFDictionary *>=A^{__CFDictionary}}}{TCFRef<const __CFArray *>={TAtomicPtr<const __CFArray *>=A^{__CFArray}}}{TCFRef<const __CFCharacterSet *>={TAtomicPtr<const __CFCharacterSet *>=A^{__CFCharacterSet}}}{TCFRef<const __CFArray *>={TAtomicPtr<const __CFArray *>=A^{__CFArray}}}{TCFRef<const __CFCharacterSet *>={TAtomicPtr<const __CFCharacterSet *>=A^{__CFCharacterSet}}}{atomic<unsigned int>=AI}{atomic<unsigned int>=AI}{atomic<unsigned int>=AI}I{TCFRef<const __CFCharacterSet *>={TAtomicPtr<const __CFCharacterSet *>=A^{__CFCharacterSet}}}{atomic<long>=Al}{TAtomicPtr<const TBMPDataCache *>=A^{TBMPDataCache}}{TAtomicPtr<const std::__1::unordered_map<unsigned short, unsigned short, std::__1::hash<unsigned short>, std::__1::equal_to<unsigned short>, std::__1::allocator<std::__1::pair<const unsigned short, unsigned short> > > *>=A^{unordered_map<unsigned short, unsigned short, std::__1::hash<unsigned short>, std::__1::equal_to<unsigned short>, std::__1::allocator<std::__1::pair<const unsigned short, unsigned short> > >}}{TUnfairLock={os_unfair_lock_s=I}}{pair<const unsigned short *, const unsigned short *>=^S^S}{TAtomicPtr<TTraitsValues *>=A^{TTraitsValues}}{StrikeMetrics=fffI{CGPoint=ff}{CGRect={CGPoint=ff}{CGSize=ff}}B}{atomic<unsigned int>=AI}{atomic<unsigned int>=AI}{atomic<CTFontFormat>=AI}{TUnfairLock={os_unfair_lock_s=I}}{TInlineVector<TCFRef<const __CFData *>, 4>=^{TCFRef<const __CFData *>}^{TCFRef<const __CFData *>}{__compressed_pair<TCFRef<const __CFData *> *, TInlineBufferAllocator<TCFRef<const __CFData *>, 4> >=^{TCFRef<const __CFData *>}{TInlineBufferAllocator<TCFRef<const __CFData *>, 4>={type=[16C]}^{TCFRef<const __CFData *>}}}}{array<TCFRef<__CFDictionary *>, 7>=[7{TCFRef<__CFDictionary *>={TAtomicPtr<__CFDictionary *>=A^{__CFDictionary}}}]}}, name: _baseFont
    struct TTraitsValues _traitsValue;
    const struct TTraitsValues *_refTraits;
    unsigned int _count;
    NSArray *_cascade;
    NSMutableArray *_fallbacks;
    unsigned int _hash;
}

- (id).cxx_construct;
- (struct __CTFontDescriptor *)cachedDescriptorForCharacter:(unsigned short)arg1;
- (unsigned int)countByEnumeratingWithState:(CDStruct_11f37819 *)arg1 objects:(id *)arg2 count:(unsigned int)arg3;
- (void)getObjects:(id *)arg1 range:(struct _NSRange)arg2;
- (id)objectAtIndex:(unsigned int)arg1;
- (id)objectAtIndex:(unsigned int)arg1 shouldLock:(_Bool)arg2 addRanges:(_Bool)arg3;
- (unsigned int)count;
- (void)dealloc;
-     // Error parsing type: @16@0:4r^{TBaseFont=^^?{atomic<int>=Ai}{TCFRef<const __CFData *>={TAtomicPtr<const __CFData *>=A^{__CFData}}}{TCFRef<const __CFData *>={TAtomicPtr<const __CFData *>=A^{__CFData}}}{TCFRef<const __CFData *>={TAtomicPtr<const __CFData *>=A^{__CFData}}}{TCFRef<const __CFData *>={TAtomicPtr<const __CFData *>=A^{__CFData}}}{TCFRef<const __CFData *>={TAtomicPtr<const __CFData *>=A^{__CFData}}}{TCFRef<const __CFData *>={TAtomicPtr<const __CFData *>=A^{__CFData}}}{TCFRef<const __CFData *>={TAtomicPtr<const __CFData *>=A^{__CFData}}}{TCFRef<const __CFData *>={TAtomicPtr<const __CFData *>=A^{__CFData}}}{TCFRef<const __CFData *>={TAtomicPtr<const __CFData *>=A^{__CFData}}}{TCFRef<const __CFURL *>={TAtomicPtr<const __CFURL *>=A^{__CFURL}}}{TCFRef<CGFont *>={TAtomicPtr<CGFont *>=A^{CGFont}}}{TUnfairLock={os_unfair_lock_s=I}}{TCFRef<__CFDictionary *>={TAtomicPtr<__CFDictionary *>=A^{__CFDictionary}}}{TCFRef<const __CFArray *>={TAtomicPtr<const __CFArray *>=A^{__CFArray}}}{TCFRef<const __CFCharacterSet *>={TAtomicPtr<const __CFCharacterSet *>=A^{__CFCharacterSet}}}{TCFRef<const __CFArray *>={TAtomicPtr<const __CFArray *>=A^{__CFArray}}}{TCFRef<const __CFCharacterSet *>={TAtomicPtr<const __CFCharacterSet *>=A^{__CFCharacterSet}}}{atomic<unsigned int>=AI}{atomic<unsigned int>=AI}{atomic<unsigned int>=AI}I{TCFRef<const __CFCharacterSet *>={TAtomicPtr<const __CFCharacterSet *>=A^{__CFCharacterSet}}}{atomic<long>=Al}{TAtomicPtr<const TBMPDataCache *>=A^{TBMPDataCache}}{TAtomicPtr<const std::__1::unordered_map<unsigned short, unsigned short, std::__1::hash<unsigned short>, std::__1::equal_to<unsigned short>, std::__1::allocator<std::__1::pair<const unsigned short, unsigned short> > > *>=A^{unordered_map<unsigned short, unsigned short, std::__1::hash<unsigned short>, std::__1::equal_to<unsigned short>, std::__1::allocator<std::__1::pair<const unsigned short, unsigned short> > >}}{TUnfairLock={os_unfair_lock_s=I}}{pair<const unsigned short *, const unsigned short *>=^S^S}{TAtomicPtr<TTraitsValues *>=A^{TTraitsValues}}{StrikeMetrics=fffI{CGPoint=ff}{CGRect={CGPoint=ff}{CGSize=ff}}B}{atomic<unsigned int>=AI}{atomic<unsigned int>=AI}{atomic<CTFontFormat>=AI}{TUnfairLock={os_unfair_lock_s=I}}{TInlineVector<TCFRef<const __CFData *>, 4>=^{TCFRef<const __CFData *>}^{TCFRef<const __CFData *>}{__compressed_pair<TCFRef<const __CFData *> *, TInlineBufferAllocator<TCFRef<const __CFData *>, 4> >=^{TCFRef<const __CFData *>}{TInlineBufferAllocator<TCFRef<const __CFData *>, 4>={type=[16C]}^{TCFRef<const __CFData *>}}}}{array<TCFRef<__CFDictionary *>, 7>=[7{TCFRef<__CFDictionary *>={TAtomicPtr<__CFDictionary *>=A^{__CFDictionary}}}]}}8@12, name: initWithBaseFont:cascade:

@end

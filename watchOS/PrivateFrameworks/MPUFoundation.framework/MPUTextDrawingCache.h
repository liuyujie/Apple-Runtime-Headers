//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MPUTextDrawingCacheKey, NSCache, NSDictionary, NSHashTable, NSOperationQueue, NSStringDrawingContext;

@interface MPUTextDrawingCache : NSObject
{
    NSCache *_cache;
    NSStringDrawingContext *_reusableStringDrawingContext;
    MPUTextDrawingCacheKey *_reusableTextDrawingCacheKey;
    NSHashTable *_invalidationObservers;
    unsigned int _invalidationNotificationCoalescingRequestsCount;
    _Bool _wasInvalidatedWithoutNotifyingObservers;
    NSOperationQueue *_preHeatingOperationQueue;
    _Bool _opaque;
    _Bool _usesImageCachingInsteadOfStringDrawingContextCaching;
    NSDictionary *_textAttributes;
    unsigned int _maximumNumberOfLines;
    float _displayScale;
    CDUnknownBlockType _attributedTextProvider;
}

+ (struct CGSize)_validateAllowedSize:(struct CGSize)arg1;
+ (void)_updateStringDrawingContext:(id)arg1 withMaximumNumberOfLines:(unsigned int)arg2;
+ (id)_drawingContextForText:(id)arg1 allowedSize:(struct CGSize)arg2 fromCache:(id)arg3 usingReusableStringDrawingContext:(id)arg4 reusableTextDrawingCacheKey:(id)arg5 textAttributes:(id)arg6 maximumNumberOfLines:(unsigned int)arg7 opaque:(_Bool)arg8 displayScale:(float)arg9 attributedTextProvider:(CDUnknownBlockType)arg10;
@property(nonatomic, getter=_usesImageCachingInsteadOfStringDrawingContextCaching, setter=_setUsesImageCachingInsteadOfStringDrawingContextCaching:) _Bool usesImageCachingInsteadOfStringDrawingContextCaching; // @synthesize usesImageCachingInsteadOfStringDrawingContextCaching=_usesImageCachingInsteadOfStringDrawingContextCaching;
@property(nonatomic, getter=_isOpaque, setter=_setOpaque:) _Bool opaque; // @synthesize opaque=_opaque;
@property(copy, nonatomic) CDUnknownBlockType attributedTextProvider; // @synthesize attributedTextProvider=_attributedTextProvider;
@property(nonatomic) float displayScale; // @synthesize displayScale=_displayScale;
@property(nonatomic) unsigned int maximumNumberOfLines; // @synthesize maximumNumberOfLines=_maximumNumberOfLines;
@property(copy, nonatomic) NSDictionary *textAttributes; // @synthesize textAttributes=_textAttributes;
- (void).cxx_destruct;
- (void)_notifyInvalidationObservers;
- (void)_invalidate;
- (void)preHeatForStrings:(id)arg1 allowedSize:(struct CGSize)arg2;
- (void)endCoalescingInvalidationNotifications;
- (void)beginCoalescingInvalidationNotifications;
- (void)removeInvalidationObserver:(id)arg1;
- (void)addInvalidationObserver:(id)arg1;
- (id)drawingContextForText:(id)arg1 allowedSize:(struct CGSize)arg2;
- (void)dealloc;
- (id)init;

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSMutableIndexSet, NSObject<OS_dispatch_queue>;

@interface ISFrameCache : NSObject
{
    struct CGImageSource *_gifSource;
    unsigned int _frameCount;
    unsigned int _fullCachingCost;
    NSObject<OS_dispatch_queue> *_frameGenerationQueue;
    NSObject<OS_dispatch_queue> *_cacheIsolationQueue;
    unsigned int _frameCacheSize;
    NSMutableDictionary *_frameCache;
    unsigned int _lastRequestedIdx;
    NSMutableIndexSet *_cachedIndexes;
    struct {
        _Bool cacheSize;
        _Bool frameCache;
    } _isValid;
    int _cacheStrategy;
}

+ (id)sharedFrameGenerationQueue;
- (void).cxx_destruct;
- (struct CGImage *)_createPredrawnImage:(struct CGImage *)arg1;
- (void)_frameGenerationQueue_updateFrameCache;
- (void)_frameGenerationQueue_cacheFrameAtIndex:(unsigned int)arg1;
- (void)dealloc;
- (void)_updateFrameCache;
- (void)_updateDesiredCacheSize;
- (void)_updateIfNeeded;
- (void)_invalidateCache;
- (void)_invalidateCacheSize;
@property(nonatomic) int cacheStrategy; // @synthesize cacheStrategy=_cacheStrategy;
- (struct CGImage *)_frameAtIndex:(unsigned int)arg1 allowLazy:(_Bool)arg2;
- (struct CGImage *)frameAtIndexIfReady:(unsigned int)arg1;
- (struct CGImage *)frameAtIndex:(unsigned int)arg1;
- (id)initWithImageSource:(struct CGImageSource *)arg1 cachingStrategy:(int)arg2 useGlobalDecodeQueue:(_Bool)arg3;
- (id)initWithImageSource:(struct CGImageSource *)arg1 cachingStrategy:(int)arg2;
- (id)initWithImageSource:(struct CGImageSource *)arg1;

@end


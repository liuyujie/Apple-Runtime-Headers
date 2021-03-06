//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TSDCanvasDelegate.h"
#import "TSDDynamicCanvasDelegate.h"
#import "TSDPartitioner.h"
#import "TSKChangeSourceObserver.h"

@class NSString, TSDCanvas, TSDDrawableInfo, TSUPointerKeyDictionary;

__attribute__((visibility("hidden")))
@interface TSDDefaultPartitioner : NSObject <TSKChangeSourceObserver, TSDDynamicCanvasDelegate, TSDPartitioner, TSDCanvasDelegate>
{
    TSDDrawableInfo *mInfo;
    TSDCanvas *mCanvas;
    TSUPointerKeyDictionary *mMainRepsByCanvas;
    TSUPointerKeyDictionary *mCachedImagesByCanvas;
    TSUPointerKeyDictionary *mPartialRepsByCanvas;
    _Bool mPaginateRightToLeft;
}

@property(readonly, nonatomic) _Bool paginateRightToLeft; // @synthesize paginateRightToLeft=mPaginateRightToLeft;
- (void)processChanges:(id)arg1 forChangeSource:(id)arg2;
- (void)preprocessChanges:(id)arg1 forChangeSource:(id)arg2;
- (void)i_layoutUnregistered:(id)arg1;
- (void)i_layoutRegistered:(id)arg1;
- (id)p_childRepForRep:(id)arg1 toNotifyForInfo:(id)arg2;
- (id)p_repsForInfo:(id)arg1;
- (id)p_layoutsForInfo:(id)arg1;
- (unsigned long long)p_edgesForHintBounds:(struct CGRect)arg1;
- (id)p_nextHintForSize:(struct CGSize)arg1 previousHint:(id)arg2 horizontally:(_Bool)arg3;
- (id)p_firstHintForSize:(struct CGSize)arg1;
- (void)p_teardownLayouts;
- (void)p_generateLayouts;
- (void)i_unregisterPartialRep:(id)arg1;
- (void)i_registerPartialRep:(id)arg1;
- (void)i_removeCachedImageForCanvas:(id)arg1;
- (void)i_setCachedImage:(struct CGImage *)arg1 forCanvas:(id)arg2;
- (struct CGImage *)i_cachedImageForCanvas:(id)arg1;
- (id)i_repForCanvas:(id)arg1;
- (id)i_layout;
- (id)documentRoot;
- (void)setLayoutPartititionsRightToLeft:(_Bool)arg1 contentPartitionsRightToLeft:(_Bool)arg2;
- (void)reset;
- (id)nextLayoutForSize:(struct CGSize)arg1 parentLayout:(id)arg2 previousHint:(id)arg3 horizontally:(_Bool)arg4 outFinished:(out _Bool *)arg5;
- (id)nextHintForSize:(struct CGSize)arg1 parentLayout:(id)arg2 previousHint:(id)arg3 horizontally:(_Bool)arg4 outFinished:(out _Bool *)arg5;
- (id)layoutForHint:(id)arg1 parentLayout:(id)arg2;
- (_Bool)didHint:(id)arg1 syncWithNextHint:(id)arg2 horizontally:(_Bool)arg3 delta:(int)arg4;
- (id)hintForLayout:(id)arg1;
- (void)dealloc;
- (id)initWithInfo:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) id <TSDCanvasProxyDelegate> canvasProxyDelegate;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


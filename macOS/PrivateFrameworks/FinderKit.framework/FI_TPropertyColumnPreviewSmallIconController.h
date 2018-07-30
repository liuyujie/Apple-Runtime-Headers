//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <FinderKit/FI_TPropertyImageViewController.h>

#import "TPropertyThumbnailExtractorDelegate.h"
#import "TThumbnailExtractorDelegate.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface FI_TPropertyColumnPreviewSmallIconController : FI_TPropertyImageViewController <TPropertyThumbnailExtractorDelegate, TThumbnailExtractorDelegate>
{
    struct TFENodeVector _nodes;
    unordered_set_931aff12 _pendingKeyNodes;
    TNSWeakPtr_a131d41e _pendingKeyNodesToken;
    _Bool _wantsToWaitForThumbnails;
    struct vector<TNotificationCenterObserver, std::__1::allocator<TNotificationCenterObserver>> _viewObservers;
    struct TKeyValueObserver _effectiveAppearanceObserver;
    TNSWeakPtr_a131d41e _updateAfterResizeToken;
    struct TNSRef<NSObject, void> _cachedValue;
    _Bool _isApplicableToUI;
}

+ (id)keyPathsForValuesAffectingShouldBeVisible;
@property(nonatomic, getter=isApplicableToUI) _Bool applicableToUI; // @synthesize applicableToUI=_isApplicableToUI;
@property _Bool wantsToWaitForThumbnails; // @synthesize wantsToWaitForThumbnails=_wantsToWaitForThumbnails;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)waitForThumbnail:(const struct TFENode *)arg1;
- (void)timesUpWaitingForThumbs;
- (struct TFENode)thumbnailTargetNodeForNode:(const struct TFENode *)arg1;
- (void)invalidateThumbnailForKeyNodes:(const struct TFENodeVector *)arg1;
- (_Bool)fetchIconifiedThumbnails;
@property(readonly, nonatomic) vector_2129316b nodeToImageList;
- (void)configureThumbnailer:(const struct TFENode *)arg1 iconSize:(double)arg2 scaleFactor:(double)arg3;
@property(nonatomic) struct TFENode browserTargetNode;
- (void)flushCachedValue;
- (void)flush;
- (void)updateWithNodes:(const struct TFENodeVector *)arg1;
- (id)thumbnailValueExtractor;
- (void)imageViewEffectiveAppearanceChanged;
- (void)imageViewBackingPropertiesChanged;
- (void)updateIconSize;
- (id)extractValueFromNodes:(const struct TFENodeVector *)arg1;
- (_Bool)shouldBeVisible;
- (_Bool)isApplicableToNodes:(const struct TFENodeVector *)arg1;
- (void)aboutToTearDown;
- (void)viewLoaded;
- (void)initCommon;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

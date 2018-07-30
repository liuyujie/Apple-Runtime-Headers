//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PXGadget.h"

@class NSString, PXGadgetSpec, UIViewController<PXPhotoLibraryPresenting>;

@interface PXMessagesRecentPhotosGadget : NSObject <PXGadget>
{
    long long _priority;
    id <PXGadgetDelegate> _delegate;
    PXGadgetSpec *_gadgetSpec;
    UIViewController<PXPhotoLibraryPresenting> *_recentPhotosViewController;
    double _preferredHeight;
}

@property(nonatomic) double preferredHeight; // @synthesize preferredHeight=_preferredHeight;
@property(retain, nonatomic) UIViewController<PXPhotoLibraryPresenting> *recentPhotosViewController; // @synthesize recentPhotosViewController=_recentPhotosViewController;
@property(retain, nonatomic) PXGadgetSpec *gadgetSpec; // @synthesize gadgetSpec=_gadgetSpec;
@property(nonatomic) __weak id <PXGadgetDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long priority; // @synthesize priority=_priority;
- (void).cxx_destruct;
- (void)userDidSelectAccessoryButton:(id)arg1;
- (void)loadContentData;
- (_Bool)hasLoadedContentData;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)_updateViewControllerInsets;
- (struct NSObject *)contentViewController;
@property(readonly, nonatomic) _Bool hasContentToDisplay;
@property(readonly, nonatomic) NSString *accessoryButtonTitle;
@property(readonly, nonatomic) unsigned long long accessoryButtonType;
@property(readonly, nonatomic) unsigned long long gadgetType;
@property(readonly, nonatomic) unsigned long long headerStyle;
@property(readonly, nonatomic) NSString *localizedTitle;

// Remaining properties
@property(readonly, nonatomic) const struct __CFString *accessoryButtonEventTrackerKey;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) _Bool supportsAssetsDrop;
@property(readonly, nonatomic) _Bool supportsHighlighting;
@property(readonly, nonatomic) _Bool supportsSelection;
@property(nonatomic) struct CGRect visibleContentRect;

@end

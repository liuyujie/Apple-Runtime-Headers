//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PXGadget.h"

@class NSString, PXGadgetSpec, PXPhotosGlobalFooterView;

@interface PXForYouFooterGadget : NSObject <PXGadget>
{
    PXGadgetSpec *_gadgetSpec;
    id <PXGadgetDelegate> _delegate;
    PXPhotosGlobalFooterView *_footerView;
}

@property(retain, nonatomic) PXPhotosGlobalFooterView *footerView; // @synthesize footerView=_footerView;
@property(nonatomic) __weak id <PXGadgetDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) PXGadgetSpec *gadgetSpec; // @synthesize gadgetSpec=_gadgetSpec;
- (void).cxx_destruct;
- (struct NSObject *)contentView;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
@property(readonly, nonatomic) _Bool hasContentToDisplay;
@property(readonly, nonatomic) unsigned long long gadgetType;
- (id)initWithViewModel:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) const struct __CFString *accessoryButtonEventTrackerKey;
@property(readonly, nonatomic) NSString *accessoryButtonTitle;
@property(readonly, nonatomic) unsigned long long accessoryButtonType;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) unsigned long long headerStyle;
@property(readonly, nonatomic) NSString *localizedTitle;
@property(nonatomic) long long priority;
@property(readonly) Class superclass;
@property(readonly, nonatomic) _Bool supportsAssetsDrop;
@property(readonly, nonatomic) _Bool supportsHighlighting;
@property(readonly, nonatomic) _Bool supportsSelection;
@property(nonatomic) struct CGRect visibleContentRect;

@end


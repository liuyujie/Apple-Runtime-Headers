//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIControl.h"

#import "NTKContainerViewLayoutDelegate.h"

@class CLKDevice, NSString, NTKContainerView, UIImageView, UILabel;

@interface NTKDeleteConfirmationButton : UIControl <NTKContainerViewLayoutDelegate>
{
    CLKDevice *_device;
    NTKContainerView *_containerView;
    UIImageView *_deleteIconView;
    UILabel *_deleteLabel;
}

- (void).cxx_destruct;
- (void)setHighlighted:(_Bool)arg1;
- (void)layoutContainerView:(id)arg1;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end


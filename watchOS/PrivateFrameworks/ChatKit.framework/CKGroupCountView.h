//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIImageView, UILabel;

@interface CKGroupCountView : UIView
{
    UIImageView *_groupIcon;
    UILabel *_groupCountLabel;
    unsigned int _count;
}

@property(nonatomic) unsigned int count; // @synthesize count=_count;
- (void).cxx_destruct;
- (void)preferredContentSizeChanged:(id)arg1;
- (float)textBaselineFrameOriginY;
- (void)setTextBaselineFrameOriginY:(float)arg1;
- (struct CGRect)updatedFrameWithCenterY:(float)arg1 textBaselineY:(float)arg2;
- (void)tintColorDidChange;
- (void)layoutSubviews;
- (void)sizeToFit;
- (id)init;
- (void)dealloc;

@end

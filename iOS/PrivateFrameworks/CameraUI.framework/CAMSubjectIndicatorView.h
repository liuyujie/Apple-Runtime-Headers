//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIImageView;

@interface CAMSubjectIndicatorView : UIView
{
    UIImageView *__imageView;
}

@property(readonly, nonatomic) UIImageView *_imageView; // @synthesize _imageView=__imageView;
- (void).cxx_destruct;
@property(nonatomic, getter=isPulsing) _Bool pulsing;
- (void)startScalingWithExpansionWidth:(double)arg1 duration:(double)arg2 repeatCount:(unsigned long long)arg3;
- (void)setHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGSize)intrinsicContentSize;
@property(nonatomic, getter=isInactive) _Bool inactive;
- (id)initWithFrame:(struct CGRect)arg1;

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIImageView, UILabel;

@interface _TVLLikeDislikeView : UIView
{
    UIImageView *_imageView;
    UILabel *_label;
    unsigned long long _likeCount;
    unsigned long long _dislikeCount;
}

@property(nonatomic) unsigned long long dislikeCount; // @synthesize dislikeCount=_dislikeCount;
@property(nonatomic) unsigned long long likeCount; // @synthesize likeCount=_likeCount;
- (void).cxx_destruct;
- (void)_updateLikeDislikeDisplay;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end


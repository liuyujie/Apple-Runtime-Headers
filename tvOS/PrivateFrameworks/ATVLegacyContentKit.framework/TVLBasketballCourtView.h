//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSMutableArray, TVImageView;

@interface TVLBasketballCourtView : UIView
{
    UIView *_courtContainerView;
    TVImageView *_courtImageView;
    NSMutableArray *_awayPlayerViews;
    NSMutableArray *_homePlayerViews;
}

@property(retain, nonatomic) NSMutableArray *homePlayerViews; // @synthesize homePlayerViews=_homePlayerViews;
@property(retain, nonatomic) NSMutableArray *awayPlayerViews; // @synthesize awayPlayerViews=_awayPlayerViews;
@property(retain, nonatomic) TVImageView *courtImageView; // @synthesize courtImageView=_courtImageView;
@property(retain, nonatomic) UIView *courtContainerView; // @synthesize courtContainerView=_courtContainerView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)commonInit;
- (id)initWithDictionary:(id)arg1;

@end

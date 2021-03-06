//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString, UILabel, UIPageControl;

@interface PXPageViewControllerBackgroundView : UIView
{
    UILabel *_titleLabel;
    UIPageControl *_pageControl;
    NSString *_pageTitle;
    struct UIEdgeInsets _pageMargins;
}

@property(copy, nonatomic) NSString *pageTitle; // @synthesize pageTitle=_pageTitle;
@property(nonatomic) struct UIEdgeInsets pageMargins; // @synthesize pageMargins=_pageMargins;
@property(readonly, nonatomic) UIPageControl *pageControl; // @synthesize pageControl=_pageControl;
- (void).cxx_destruct;
- (struct CGSize)_performLayoutInWidth:(double)arg1 updateSubviewFrames:(_Bool)arg2;
- (struct CGSize)contentSizeForWidth:(double)arg1;
- (void)layoutSubviews;
- (id)_createTitleLabel;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

@end


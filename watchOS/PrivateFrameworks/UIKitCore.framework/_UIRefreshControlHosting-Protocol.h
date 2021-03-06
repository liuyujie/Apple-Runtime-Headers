//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIRefreshControl, UIScrollView;

@protocol _UIRefreshControlHosting <NSObject>
@property(readonly) __weak UIScrollView *scrollView;
@property(readonly) _Bool refreshControlInsetsAffectScrollViewRubberBanding;
- (void)refreshControl:(UIRefreshControl *)arg1 didChangeToState:(int)arg2 fromState:(int)arg3;
- (void)incrementInsetHeight:(float)arg1;
- (void)decrementInsetHeight:(float)arg1;
@end


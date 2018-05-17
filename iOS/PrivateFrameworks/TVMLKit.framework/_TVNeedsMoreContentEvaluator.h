//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IKViewElement, UIScrollView;

__attribute__((visibility("hidden")))
@interface _TVNeedsMoreContentEvaluator : NSObject
{
    UIScrollView *_scrollView;
    long long _axis;
    long long _state;
    IKViewElement *_viewElement;
    double _threshold;
}

@property(nonatomic) double threshold; // @synthesize threshold=_threshold;
@property(retain, nonatomic) IKViewElement *viewElement; // @synthesize viewElement=_viewElement;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(readonly, nonatomic) long long axis; // @synthesize axis=_axis;
@property(readonly, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
- (void).cxx_destruct;
- (void)reset;
- (void)evaluateForState:(long long)arg1;
- (id)initWithScrollView:(id)arg1 axis:(long long)arg2;
- (id)init;

@end

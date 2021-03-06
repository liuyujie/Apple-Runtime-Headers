//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SiriTVUI/SiriTVUISnippetView.h>

#import "SiriTVUIGroupView.h"
#import "SiriTVUITemplatedContainerViewDelegate.h"

@class NSArray, NSString, SiriTVUITemplatedContainerView, UIView;

@interface SiriTVUITemplatedSnippetView : SiriTVUISnippetView <SiriTVUITemplatedContainerViewDelegate, SiriTVUIGroupView>
{
    SiriTVUITemplatedContainerView *_containerView;
    id <SiriTVUITemplatedViewDelegate> _templatedViewDelegate;
    UIView *_annotationView;
    UIView *_defaultFocusedView;
}

@property(nonatomic) __weak UIView *defaultFocusedView; // @synthesize defaultFocusedView=_defaultFocusedView;
@property(retain, nonatomic) UIView *annotationView; // @synthesize annotationView=_annotationView;
@property(nonatomic) __weak id <SiriTVUITemplatedViewDelegate> templatedViewDelegate; // @synthesize templatedViewDelegate=_templatedViewDelegate;
- (void).cxx_destruct;
- (void)transitionToTemplateItemViews:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)shouldFitWithinContentMargins;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1 forPartialLayout:(_Bool)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)_layoutContainerView:(id)arg1 forFullScreenFraction:(double)arg2;
- (void)layoutSubviewsForFullScreenFraction:(double)arg1;
- (void)layoutSubviews;
- (struct CGSize)calculateFittingSizeWithSize:(struct CGSize)arg1 andByIteratingRelevantSubviews:(id)arg2 withBlock:(CDUnknownBlockType)arg3;
- (void)subviewOffsetsDidChange:(_Bool)arg1;
- (void)_removeGroupedSubview:(id)arg1 fromContainerView:(id)arg2;
- (void)_addGroupedSubview:(id)arg1 toContainerView:(id)arg2;
- (void)removeGroupedSubview:(id)arg1;
- (void)addGroupedSubview:(id)arg1;
@property(readonly, nonatomic) NSArray *groupedSubviews;
- (_Bool)shouldUpdateFocusInContext:(id)arg1;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (id)preferredFocusEnvironments;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


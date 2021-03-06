//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "UIGestureRecognizerDelegate.h"

@class NSString, TVPRelatedContent, UIGestureRecognizer;

__attribute__((visibility("hidden")))
@interface TVPRelatedContentViewController : UIViewController <UIGestureRecognizerDelegate>
{
    _Bool _appearingFor27640396;
    id <TVPRelatedContentViewControllerDelegate> _delegate;
    UIViewController *_primaryViewController;
    TVPRelatedContent *_relatedContent;
    long long _preferredDisplayMode;
    long long _displayMode;
    UIGestureRecognizer *_interactionGestureRecognizer;
    unsigned long long _numberOfAppearanceTransitions;
}

@property(nonatomic, getter=isAppearingFor27640396) _Bool appearingFor27640396; // @synthesize appearingFor27640396=_appearingFor27640396;
@property(nonatomic) unsigned long long numberOfAppearanceTransitions; // @synthesize numberOfAppearanceTransitions=_numberOfAppearanceTransitions;
@property(retain, nonatomic) UIGestureRecognizer *interactionGestureRecognizer; // @synthesize interactionGestureRecognizer=_interactionGestureRecognizer;
@property(readonly, nonatomic) long long displayMode; // @synthesize displayMode=_displayMode;
@property(nonatomic) long long preferredDisplayMode; // @synthesize preferredDisplayMode=_preferredDisplayMode;
@property(retain, nonatomic) TVPRelatedContent *relatedContent; // @synthesize relatedContent=_relatedContent;
@property(retain, nonatomic) UIViewController *primaryViewController; // @synthesize primaryViewController=_primaryViewController;
@property(nonatomic) __weak id <TVPRelatedContentViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (_Bool)shouldAutomaticallyForwardAppearanceMethods;
- (void)viewDidLoad;
- (void)loadView;
- (id)preferredFocusEnvironments;
- (struct CGSize)sizeForChildContentContainer:(id)arg1 withParentContainerSize:(struct CGSize)arg2;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)setPreferredDisplayMode:(long long)arg1 animated:(_Bool)arg2;
- (void)setRelatedContent:(id)arg1 animated:(_Bool)arg2;
- (void)_menuButtonTapRecognized:(id)arg1;
- (void)_userInteractionBegan:(id)arg1;
- (long long)_actualDisplayModeForPreferredDisplayMode:(long long)arg1 withRelatedContent:(id)arg2;
- (void)_setDisplayMode:(long long)arg1 relatedContent:(id)arg2 animated:(_Bool)arg3;
- (id)_visibleViewControllers;
- (void)_augmentOverrideTraitCollectionForChildViewController:(id)arg1 withContentType:(long long)arg2;
- (id)_viewControllersForDisplayMode:(long long)arg1 withRelatedContent:(id)arg2;
- (void)_performViewAnimations:(CDUnknownBlockType)arg1 animated:(_Bool)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (double)_heightForContentType:(long long)arg1 withRelatedContent:(id)arg2 displayMode:(long long)arg3 parentContainerSize:(struct CGSize)arg4;
- (double)_widthForContentType:(long long)arg1 withRelatedContent:(id)arg2 displayMode:(long long)arg3 parentContainerSize:(struct CGSize)arg4;
- (id)_viewControllerForContentType:(long long)arg1 withRelatedContent:(id)arg2;
- (long long)_contentTypeForContainer:(id)arg1 withRelatedContent:(id)arg2;
- (double)_presentationProgressForDisplayMode:(long long)arg1;
- (void)_didTransitionToDisplayMode:(long long)arg1;
- (void)_willTransitionToDisplayMode:(long long)arg1;
- (void)_decrementNumberOfAppearanceTransitions;
- (void)_incrementNumberOfAppearanceTransitions;
- (id)_relatedContentView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <VideosUI/VUILibraryFetchControllerViewController.h>

#import "UIGestureRecognizerDelegate.h"
#import "VUIEpisodeDetailViewDelegate.h"
#import "VUIMediaEntitiesFetchControllerDelegate.h"

@class NSString, UITapGestureRecognizer, VUIEpisodeDetailView, VUIMediaItem, VUIMetricsController;

__attribute__((visibility("hidden")))
@interface VUIEpisodeDetailViewController : VUILibraryFetchControllerViewController <UIGestureRecognizerDelegate, VUIEpisodeDetailViewDelegate, VUIMediaEntitiesFetchControllerDelegate>
{
    VUIMediaItem *_mediaItem;
    id <VUIEpisodeDetailViewControllerDelegate> _delegate;
    VUIEpisodeDetailView *_detailView;
    UITapGestureRecognizer *_tapGestureRecognizer;
    VUIMetricsController *_metricsController;
}

@property(retain, nonatomic) VUIMetricsController *metricsController; // @synthesize metricsController=_metricsController;
@property(retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer; // @synthesize tapGestureRecognizer=_tapGestureRecognizer;
@property(retain, nonatomic) VUIEpisodeDetailView *detailView; // @synthesize detailView=_detailView;
@property(nonatomic) __weak id <VUIEpisodeDetailViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) VUIMediaItem *mediaItem; // @synthesize mediaItem=_mediaItem;
- (void).cxx_destruct;
- (void)_configureNavigationBar;
- (void)dismissPopover;
- (void)didTapPlay;
- (void)dismissTapped:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)controller:(id)arg1 fetchRequests:(id)arg2 didFailWithError:(id)arg3;
- (void)controller:(id)arg1 fetchRequests:(id)arg2 didCompleteWithResult:(id)arg3;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithMediaLibrary:(id)arg1;
- (id)initWithMediaItem:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class ICCircularProgressView, NSProgress, UIActivityIndicatorView, UILabel;

@interface ICProgressViewController : UIViewController
{
    _Bool _showsCancel;
    NSProgress *_observedProgress;
    id <ICProgressViewControllerDelegate> _progressDelegate;
    UILabel *_label;
    UIActivityIndicatorView *_activityIndicator;
    ICCircularProgressView *_circularProgressView;
}

@property(retain, nonatomic) ICCircularProgressView *circularProgressView; // @synthesize circularProgressView=_circularProgressView;
@property(retain, nonatomic) UIActivityIndicatorView *activityIndicator; // @synthesize activityIndicator=_activityIndicator;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
@property(nonatomic) __weak id <ICProgressViewControllerDelegate> progressDelegate; // @synthesize progressDelegate=_progressDelegate;
@property(nonatomic) _Bool showsCancel; // @synthesize showsCancel=_showsCancel;
@property(retain, nonatomic) NSProgress *observedProgress; // @synthesize observedProgress=_observedProgress;
- (void).cxx_destruct;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithDelegate:(id)arg1;

@end


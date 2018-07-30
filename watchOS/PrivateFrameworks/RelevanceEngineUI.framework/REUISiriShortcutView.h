//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class PUICButton, REUISiriShortcutHeaderView, UILayoutGuide, UIStackView, UITapGestureRecognizer;

@interface REUISiriShortcutView : UIView
{
    REUISiriShortcutHeaderView *_headerView;
    UIView *_contentView;
    UIView *_presentedContentView;
    UIStackView *_buttonsStack;
    PUICButton *_confirmButton;
    PUICButton *_dismissButton;
    UITapGestureRecognizer *_iconTapGestureRecognizer;
    id <REUISiriShortcutViewDelegate> _delegate;
    UILayoutGuide *_backgroundViewLayoutGuide;
}

+ (void)initialize;
@property(readonly, nonatomic) UILayoutGuide *backgroundViewLayoutGuide; // @synthesize backgroundViewLayoutGuide=_backgroundViewLayoutGuide;
@property(nonatomic) __weak id <REUISiriShortcutViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)populateWithContentViewModel:(id)arg1;
- (void)_handleConfirmation:(id)arg1;
- (void)_handleDismiss:(id)arg1;
- (void)_iconTapRecognized:(id)arg1;
- (void)layoutSubviews;
- (id)initWithApplicationViewModel:(id)arg1;

@end

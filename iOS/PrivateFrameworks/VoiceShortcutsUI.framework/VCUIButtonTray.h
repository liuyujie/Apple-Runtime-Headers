//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSLayoutConstraint, UIButton, UILabel, VCUIRecordButton, _UIBackdropView;

@interface VCUIButtonTray : UIView
{
    _Bool _showButtonDescription;
    id <VCUIButtonTrayDelegate> _delegate;
    VCUIRecordButton *_recordButton;
    UIButton *_typeToSiriButton;
    UILabel *_buttonDescriptionLabel;
    _UIBackdropView *_trayBackdrop;
    NSLayoutConstraint *_buttonDescriptionLayoutConstraint;
}

@property(retain, nonatomic) NSLayoutConstraint *buttonDescriptionLayoutConstraint; // @synthesize buttonDescriptionLayoutConstraint=_buttonDescriptionLayoutConstraint;
@property(retain, nonatomic) _UIBackdropView *trayBackdrop; // @synthesize trayBackdrop=_trayBackdrop;
@property(retain, nonatomic) UILabel *buttonDescriptionLabel; // @synthesize buttonDescriptionLabel=_buttonDescriptionLabel;
@property(nonatomic) _Bool showButtonDescription; // @synthesize showButtonDescription=_showButtonDescription;
@property(retain, nonatomic) UIButton *typeToSiriButton; // @synthesize typeToSiriButton=_typeToSiriButton;
@property(retain, nonatomic) VCUIRecordButton *recordButton; // @synthesize recordButton=_recordButton;
@property(nonatomic) __weak id <VCUIButtonTrayDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)updateConstraintsForButtonDescription;
- (void)updateForContentScrollingUnder:(_Bool)arg1;
- (id)initWithDelegate:(id)arg1 buttonDescription:(id)arg2;

@end


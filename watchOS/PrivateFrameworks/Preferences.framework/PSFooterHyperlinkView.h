//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewHeaderFooterView.h"

#import "PSHeaderFooterView.h"
#import "UITextViewDelegate.h"

@class NSLayoutConstraint, NSString, NSURL, UITextView;

@interface PSFooterHyperlinkView : UITableViewHeaderFooterView <PSHeaderFooterView, UITextViewDelegate>
{
    NSString *_text;
    NSURL *_URL;
    id _target;
    SEL _action;
    UITextView *_textView;
    NSLayoutConstraint *_textViewLeadingConstraint;
    NSLayoutConstraint *_textViewTrailingConstraint;
    struct _NSRange _linkRange;
}

@property(retain, nonatomic) NSLayoutConstraint *textViewTrailingConstraint; // @synthesize textViewTrailingConstraint=_textViewTrailingConstraint;
@property(retain, nonatomic) NSLayoutConstraint *textViewLeadingConstraint; // @synthesize textViewLeadingConstraint=_textViewLeadingConstraint;
@property(retain, nonatomic) UITextView *textView; // @synthesize textView=_textView;
@property(nonatomic) SEL action; // @synthesize action=_action;
@property(nonatomic) __weak id target; // @synthesize target=_target;
@property(nonatomic) struct _NSRange linkRange; // @synthesize linkRange=_linkRange;
@property(retain, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
- (void).cxx_destruct;
- (void)_accessibilitySetInterfaceStyleIntent:(unsigned int)arg1;
- (_Bool)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange)arg3;
- (float)preferredHeightForWidth:(float)arg1 inTableView:(id)arg2;
- (_Bool)isValidLinkRange;
- (void)_linkify;
- (void)updateConstraints;
- (void)setTableView:(id)arg1;
- (void)setupSubviewsAndContstraints;
- (id)initWithSpecifier:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end


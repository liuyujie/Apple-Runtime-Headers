//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewHeaderFooterView.h"

#import "NUIContainerStackViewDelegate.h"

@class NSString, SFResultSection, TLKStackView, UIButton, UILabel;

@interface SearchUITableHeaderView : UITableViewHeaderFooterView <NUIContainerStackViewDelegate>
{
    _Bool _usesInsetRoundedSections;
    id <SearchUITableHeaderViewDelegate> _delegate;
    id <SFFeedbackListener> _feedbackListener;
    unsigned long long _headerType;
    SFResultSection *_section;
    UILabel *_titleLabel;
    UIButton *_headerOptionButton;
    TLKStackView *_stackView;
}

+ (id)reuseIdentifier;
@property _Bool usesInsetRoundedSections; // @synthesize usesInsetRoundedSections=_usesInsetRoundedSections;
@property(retain) TLKStackView *stackView; // @synthesize stackView=_stackView;
@property(retain) UIButton *headerOptionButton; // @synthesize headerOptionButton=_headerOptionButton;
@property(retain) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain) SFResultSection *section; // @synthesize section=_section;
@property unsigned long long headerType; // @synthesize headerType=_headerType;
@property __weak id <SFFeedbackListener> feedbackListener; // @synthesize feedbackListener=_feedbackListener;
@property __weak id <SearchUITableHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
@property(readonly) NSString *title;
- (void)setFloating:(_Bool)arg1;
- (void)moreButtonPressed;
- (void)headerOptionButtonPressed;
- (_Bool)supportsShowMoreInApp;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateHeaderButtonVisibility;
- (id)moreResultsPunchout;
- (void)updateWithSection:(id)arg1 isExpanded:(_Bool)arg2 usesInsetRoundedSection:(_Bool)arg3;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGSize)systemLayoutSizeFittingSize:(struct CGSize)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)containerView:(id)arg1 willMeasureArrangedSubviewsFittingSize:(struct CGSize)arg2 forReason:(long long)arg3;
- (void)updateAlignmentRectInsets;
- (id)initWithStyle:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


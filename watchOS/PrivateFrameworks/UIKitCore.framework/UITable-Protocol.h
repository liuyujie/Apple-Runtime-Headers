//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIEditable.h"

@class UIColor, UIScrollView;

@protocol UITable <UIEditable>
@property(readonly, nonatomic) UIColor *multiselectCheckmarkColor;
@property(readonly, nonatomic, getter=_accessoryBaseColor) UIColor *accessoryBaseColor;
@property(readonly, nonatomic, getter=_sectionContentInsetFollowsLayoutMargins) _Bool sectionContentInsetFollowsLayoutMargins;
@property(readonly, nonatomic, getter=_sectionCornerRadius) float sectionCornerRadius;
@property(readonly, nonatomic, getter=_sectionBorderWidth) float sectionBorderWidth;
@property(readonly, nonatomic, getter=_rawSectionContentInset) struct UIEdgeInsets rawSectionContentInset;
@property(readonly, nonatomic, getter=_sectionContentInset) struct UIEdgeInsets sectionContentInset;
@property(readonly, nonatomic, getter=_indexBarExtentFromEdge) float indexBarExtentFromEdge;
@property(readonly, nonatomic, getter=_indexFrame) struct CGRect indexFrame;
@property(readonly, nonatomic, getter=_isShowingIndex) _Bool showingIndex;
@property(readonly, nonatomic, getter=_bottomPadding) float bottomPadding;
@property(readonly, nonatomic, getter=_topPadding) float topPadding;
@property(readonly, nonatomic) _Bool cellLayoutMarginsFollowReadableWidth;
@property(readonly, nonatomic, getter=_backgroundInset) float backgroundInset;
@property(readonly, nonatomic) _Bool overlapsSectionHeaderViews;
@property(readonly, nonatomic) _Bool usesVariableMargins;
@property(readonly, nonatomic, getter=_separatorInsetIsRelativeToCellEdges) _Bool separatorInsetIsRelativeToCellEdges;
@property(readonly, nonatomic) struct UIEdgeInsets separatorInset;
@property(readonly, nonatomic) float estimatedSectionFooterHeight;
@property(readonly, nonatomic) float estimatedSectionHeaderHeight;
@property(readonly, nonatomic) float estimatedRowHeight;
@property(readonly, nonatomic) float sectionFooterHeight;
@property(readonly, nonatomic) float sectionHeaderHeight;
@property(readonly, nonatomic) float rowHeight;
@property(readonly, nonatomic) _Bool allowsMultipleSelectionDuringEditing;
@property(readonly, nonatomic) _Bool allowsMultipleSelection;
@property(readonly, nonatomic, getter=_numberOfSections) int numberOfSections;
@property(readonly, nonatomic, getter=_scrollView) UIScrollView *scrollView;
@property(readonly, nonatomic, getter=_style) int style;
- (_Bool)_shouldHaveFooterViewForSection:(int)arg1;
- (_Bool)_shouldHaveHeaderViewForSection:(int)arg1;
- (int)_numberOfRowsInSection:(int)arg1;
@end


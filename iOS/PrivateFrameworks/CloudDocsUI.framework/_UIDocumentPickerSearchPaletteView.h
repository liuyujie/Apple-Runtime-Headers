//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UISearchBarDelegate.h"

@class NSLayoutConstraint, NSString, UISearchController, _UIDocumentSearchListController;

__attribute__((visibility("hidden")))
@interface _UIDocumentPickerSearchPaletteView : UIView <UISearchBarDelegate>
{
    UISearchController *_searchController;
    _UIDocumentSearchListController *_resultsController;
    NSLayoutConstraint *_searchFieldLeftConstraint;
    NSLayoutConstraint *_searchFieldRightConstraint;
}

@property(retain, nonatomic) NSLayoutConstraint *searchFieldRightConstraint; // @synthesize searchFieldRightConstraint=_searchFieldRightConstraint;
@property(retain, nonatomic) NSLayoutConstraint *searchFieldLeftConstraint; // @synthesize searchFieldLeftConstraint=_searchFieldLeftConstraint;
@property(retain, nonatomic) _UIDocumentSearchListController *resultsController; // @synthesize resultsController=_resultsController;
@property(retain, nonatomic) UISearchController *searchController; // @synthesize searchController=_searchController;
- (void).cxx_destruct;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)searchCanceled:(id)arg1;
- (void)searchBarTextDidBeginEditing:(id)arg1;
- (void)layoutSubviews;
- (void)setFrame:(struct CGRect)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 resultsController:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

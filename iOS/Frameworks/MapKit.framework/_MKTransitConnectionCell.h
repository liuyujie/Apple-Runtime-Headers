//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MapKit/MKCustomSeparatorTableViewCell.h>

@class MKTransitInfoLabelView, NSLayoutConstraint, UIButton, _MKUILabel;

__attribute__((visibility("hidden")))
@interface _MKTransitConnectionCell : MKCustomSeparatorTableViewCell
{
    _MKUILabel *_nameLabel;
    MKTransitInfoLabelView *_transitInfoLabel;
    UIButton *_button;
    NSLayoutConstraint *_nameLabelToTopConstraint;
    NSLayoutConstraint *_transitInfoToNameConstraint;
    id <GEOTransitConnectionInfo> _connectionInfo;
    id <_MKTransitConnectionCellDelegate> _delegate;
}

@property(nonatomic) __weak id <_MKTransitConnectionCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) id <GEOTransitConnectionInfo> connectionInfo; // @synthesize connectionInfo=_connectionInfo;
- (void).cxx_destruct;
- (void)_buttonSelected;
- (void)_updateConstraintValues;
- (void)_contentSizeCategoryDidChange;
- (void)dealloc;
- (id)initWithReuseIdentifier:(id)arg1;

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NPKPassCollectionViewCell;

@protocol NPKPassCollectionViewCellDelegate <NSObject>
- (void)npkPassCollectionViewCellDidReceiveNewZIndex:(NPKPassCollectionViewCell *)arg1;
- (void)npkPassCollectionViewCellDidChangeSuperview:(NPKPassCollectionViewCell *)arg1;
- (void)npkPassCollectionViewCellBeganDragging:(NPKPassCollectionViewCell *)arg1;
- (void)npkPassCollectionViewCellTapped:(NPKPassCollectionViewCell *)arg1;
@end

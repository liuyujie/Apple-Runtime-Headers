//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSIndexPath, PXPeopleStripCollectionViewController;

@protocol PXPeopleStripCollectionViewControllerDelegate <NSObject>
- (void)memberTappedAtIndexPath:(NSIndexPath *)arg1 forPeopleStripController:(PXPeopleStripCollectionViewController *)arg2;
- (struct UIEdgeInsets)sectionInset;
- (double)minimumInteritemSpacing;
- (double)minimumLineSpacing;
- (struct CGSize)sizeForItem;
@end

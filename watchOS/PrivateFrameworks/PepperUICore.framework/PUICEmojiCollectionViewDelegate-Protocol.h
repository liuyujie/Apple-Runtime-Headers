//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PUICCollectionViewDelegate.h"

@class NSIndexPath, PUICEmojiCollectionView, UICollectionView;

@protocol PUICEmojiCollectionViewDelegate <PUICCollectionViewDelegate>
- (void)longPressDidCancelForCollectionView:(PUICEmojiCollectionView *)arg1;
- (void)longPressDidEndForCollectionView:(PUICEmojiCollectionView *)arg1;
- (void)collectionView:(PUICEmojiCollectionView *)arg1 longPressDidMoveToPoint:(struct CGPoint)arg2;
- (void)collectionView:(PUICEmojiCollectionView *)arg1 longPressDidBeginForRowAtIndexPath:(NSIndexPath *)arg2;
- (_Bool)collectionView:(UICollectionView *)arg1 canLongPressItemAtIndexPath:(NSIndexPath *)arg2;
@end


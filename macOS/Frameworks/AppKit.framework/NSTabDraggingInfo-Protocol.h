//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSImage, NSTabBarItem, NSWindow;

@protocol NSTabDraggingInfo <NSObject>
- (NSTabBarItem *)draggingItem;
- (id)draggingSource;
- (NSImage *)draggedImage;
- (struct CGPoint)draggingLocation;
- (unsigned long long)draggingSourceOperationMask;
- (NSWindow *)draggingDestinationWindow;
@end

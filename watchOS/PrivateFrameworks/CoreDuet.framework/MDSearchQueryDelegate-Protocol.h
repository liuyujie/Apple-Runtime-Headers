//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MDSearchQuery, NSArray, NSError;

@protocol MDSearchQueryDelegate <NSObject>
- (void)searchQuery:(MDSearchQuery *)arg1 didReturnItems:(NSArray *)arg2;

@optional
- (void)searchQuery:(MDSearchQuery *)arg1 didFailWithError:(NSError *)arg2;
- (void)searchQuery:(MDSearchQuery *)arg1 statusChanged:(unsigned int)arg2;
@end

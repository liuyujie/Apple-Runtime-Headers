//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSUUID;

@protocol TIUserDictionaryServing <NSObject>
@property(readonly, copy, nonatomic) NSUUID *userDictionaryUUID;
- (void)getPhraseShortcutPairs:(void (^)(NSArray *))arg1;
- (void)removeObserver:(id)arg1;
- (id)addObserver:(void (^)(NSArray *))arg1;
@end

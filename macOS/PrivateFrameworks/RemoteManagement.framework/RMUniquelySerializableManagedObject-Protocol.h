//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "RMSerializableManagedObject.h"

@class NSDictionary, NSManagedObjectContext;

@protocol RMUniquelySerializableManagedObject <RMSerializableManagedObject>
+ (id)fetchOrCreateWithDictionaryRepresentation:(NSDictionary *)arg1 inContext:(NSManagedObjectContext *)arg2 error:(id *)arg3;
- (void)delete;
@end


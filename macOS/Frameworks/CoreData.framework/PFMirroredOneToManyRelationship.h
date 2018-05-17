//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreData/PFMirroredRelationship.h>

@class NSManagedObjectID, NSRelationshipDescription, NSString;

__attribute__((visibility("hidden")))
@interface PFMirroredOneToManyRelationship : PFMirroredRelationship
{
    NSRelationshipDescription *_relationshipDescription;
    NSRelationshipDescription *_inverseRelationshipDescription;
    NSManagedObjectID *_objectID;
    NSString *_relatedRecordName;
    NSString *_recordName;
}

@property(readonly, nonatomic) NSString *relatedRecordName; // @synthesize relatedRecordName=_relatedRecordName;
@property(readonly, nonatomic) NSString *recordName; // @synthesize recordName=_recordName;
@property(readonly, nonatomic) NSManagedObjectID *objectID; // @synthesize objectID=_objectID;
@property(readonly, nonatomic) NSRelationshipDescription *inverseRelationshipDescription; // @synthesize inverseRelationshipDescription=_inverseRelationshipDescription;
@property(readonly, nonatomic) NSRelationshipDescription *relationshipDescription; // @synthesize relationshipDescription=_relationshipDescription;
- (id)recordTypesToRecordNames;
- (BOOL)updateRelationshipValueUsingImportContext:(id)arg1 andManagedObjectContext:(id)arg2 error:(id *)arg3;
- (void)dealloc;
- (id)initWithManagedObject:(id)arg1 withRecordName:(id)arg2 relatedToRecordWithRecordName:(id)arg3 byRelationship:(id)arg4;

@end

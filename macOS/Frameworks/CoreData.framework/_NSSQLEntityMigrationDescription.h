//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSEntityMapping, NSMutableArray, NSMutableDictionary, NSSQLEntity;

__attribute__((visibility("hidden")))
@interface _NSSQLEntityMigrationDescription : NSObject
{
    NSEntityMapping *_entityMapping;
    NSMutableDictionary *_sqlValuesByColumnName;
    NSMutableDictionary *_sourceEntitiesByToOneWithNewEntityKey;
    NSSQLEntity *_dstEntity;
    NSSQLEntity *_srcEntity;
    int _migrationType;
    NSMutableArray *_addedManyToManys;
    NSMutableArray *_removedManyToManys;
    NSMutableArray *_transformedManyToManys;
    NSMutableArray *_processedTransforms;
    NSMutableArray *_pendingTransforms;
}

@property(readonly, nonatomic) int migrationType; // @synthesize migrationType=_migrationType;
@property(readonly, nonatomic) NSEntityMapping *entityMapping; // @synthesize entityMapping=_entityMapping;
@property(readonly, nonatomic) NSSQLEntity *destinationEntity; // @synthesize destinationEntity=_dstEntity;
@property(readonly, nonatomic) NSSQLEntity *sourceEntity; // @synthesize sourceEntity=_srcEntity;
- (id)nextPropertyTransform;
- (id)transformedManyToManys;
- (id)removedManyToManys;
- (id)addedManyToManys;
- (id)sqlValueForColumnName:(id)arg1 migrationContext:(struct _NSSQLMigrationContext)arg2;
- (void)_populateSQLValuesByPropertyFromTransforms:(id)arg1 migrationContext:(struct _NSSQLMigrationContext)arg2;
- (void)_populateSQLValuesForVirtualToOnesWithMigrationContext:(struct _NSSQLMigrationContext)arg1;
- (id)_unmappedRelationshipForFormerlyVirtualToOne:(id)arg1 migrationContext:(struct _NSSQLMigrationContext)arg2;
- (void)_populateSQLValuesForDestinationToOne:(id)arg1 fromSourceToOne:(id)arg2;
- (id)sourceEntitiesByToOneWithNewEntityKey;
- (void)_generateSQLValueMappingsWithMigrationContext:(struct _NSSQLMigrationContext)arg1;
- (id)description;
- (void)dealloc;
- (void)_changeToCopyMigrationType;
- (id)initWithEntityMapping:(id)arg1 sourceEntity:(id)arg2 destinationEntity:(id)arg3;

@end


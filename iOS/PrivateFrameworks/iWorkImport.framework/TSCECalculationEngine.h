//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iWorkImport/TSPObject.h>

@class NSDate, NSString, NSTimeZone, TSCEGroupByNodeMap, TSCENamedReferenceManager, TSCERemoteDataStore, TSCERewriteTableUIDInfo, TSCETablesByName, TSCETransaction, TSCEUUidReferenceMap, TSKAccessController, TSKChangeNotifier;

__attribute__((visibility("hidden")))
@interface TSCECalculationEngine : TSPObject
{
    struct TSCECalcEngine *_cppCalcEngine;
    _Bool _isUnarchiving;
}

+ (void)splitRandomSeed:(unsigned long long)arg1 intoLo:(int *)arg2 hi:(int *)arg3;
+ (unsigned long long)randomSeedFromRandomLo:(int)arg1 hi:(int)arg2;
+ (unsigned long long)generateRandomSeed;
+ (_Bool)isPotentiallyTerminating;
+ (void)resumeEvaluationIfNotTerminated;
+ (void)confirmTermination;
+ (void)pauseEvaluationForPotentialTermination;
+ (_Bool)localVariablesEnabled;
@property(nonatomic) struct TSCECalcEngine *cppCalcEngine; // @synthesize cppCalcEngine=_cppCalcEngine;
- (unsigned int)delayedArchivingPriority;
- (id)packageLocator;
- (_Bool)shouldDelayArchiving;
- (void)loadFromUnarchiver:(id)arg1;
- (void)saveToArchiver:(id)arg1;
- (struct TSCECellCoordSet)cellCoordinatesNeedingExcelImportForTable:(const UUIDData_5fbc143e *)arg1;
- (id)description;
- (id)allWholeOwnerDependenciesAsString;
- (id)allSpanningDependenciesAsString;
- (id)allRangeDependenciesAsString;
- (id)allCellDependenciesAsString;
- (id)allFormulaOwnersAsString;
- (void)assertAllDirtyCellsAreOnLeafQueue;
- (void)assertDirtyPrecedentsCountConsistency;
- (id)documentLocale;
- (id)documentRoot;
- (_Bool)hasMaxNumFormulas;
- (unsigned long long)numFormulaCellsInOwner:(const UUIDData_5fbc143e *)arg1;
- (unsigned long long)numberOfCellsWithFormulas;
- (void)removeCalculationStateObserver:(id)arg1;
- (void)addCalculationStateObserver:(id)arg1;
- (vector_a1208d01)valuesForCategoryRef:(const struct TSCECategoryRef *)arg1 atRowUid:(const UUIDData_5fbc143e *)arg2 error:(id *)arg3;
- (vector_4115f7f8)cellRefsForCategoryRef:(const struct TSCECategoryRef *)arg1 atRowUid:(const UUIDData_5fbc143e *)arg2;
- (unsigned char)aggregateTypeForCategoryRef:(const struct TSCECategoryRef *)arg1;
- (void)resetExternalReferencesToGroupNode:(const UUIDData_5fbc143e *)arg1 inGroupBy:(const UUIDData_5fbc143e *)arg2;
-     // Error parsing type: ^{TSCEDependencyTracker=@@^{TSCECalcEngine}{TSCEIDMap={os_unfair_lock_s=I}{TSCEIDAllocator<unsigned short>=S{set<unsigned short, std::__1::less<unsigned short>, std::__1::allocator<unsigned short> >={__tree<unsigned short, std::__1::less<unsigned short>, std::__1::allocator<unsigned short> >=^{__tree_end_node<std::__1::__tree_node_base<void *> *>}{__compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<unsigned short, void *> > >={__tree_end_node<std::__1::__tree_node_base<void *> *>=^{__tree_node_base<void *>}}}{__compressed_pair<unsigned long, std::__1::less<unsigned short> >=Q}}}}{unordered_map<unsigned short, TSU::UUIDData<TSP::UUIDData>, std::__1::hash<unsigned short>, std::__1::equal_to<unsigned short>, std::__1::allocator<std::__1::pair<const unsigned short, TSU::UUIDData<TSP::UUIDData> > > >={__hash_table<std::__1::__hash_value_type<unsigned short, TSU::UUIDData<TSP::UUIDData> >, std::__1::__unordered_map_hasher<unsigned short, std::__1::__hash_value_type<unsigned short, TSU::UUIDData<TSP::UUIDData> >, std::__1::hash<unsigned short>, true>, std::__1::__unordered_map_equal<unsigned short, std::__1::__hash_value_type<unsigned short, TSU::UUIDData<TSP::UUIDData> >, std::__1::equal_to<unsigned short>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned short, TSU::UUIDData<TSP::UUIDData> > > >={unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned short, TSU::UUIDData<TSP::UUIDData> >, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned short, TSU::UUIDData<TSP::UUIDData> >, void *> *> *> > >={__compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned short, TSU::UUIDData<TSP::UUIDData> >, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned short, TSU::UUIDData<TSP::UUIDData> >, void *> *> *> > >=^^{__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned short, TSU::UUIDData<TSP::UUIDData> >, void *> *>}{__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned short, TSU::UUIDData<TSP::UUIDData> >, void *> *> *> >={__compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned short, TSU::UUIDData<TSP::UUIDData> >, void *> *> *> >=Q}}}}{__compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned short, TSU::UUIDData<TSP::UUIDData> >, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned short, TSU::UUIDData<TSP::UUIDData> >, void *> > >={__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned short, TSU::UUIDData<TSP::UUIDData> >, void *> *>=^{__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned short, TSU::UUIDData<TSP::UUIDData> >, void *> *>}}}{__compressed_pair<unsigned long, std::__1::__unordered_map_hasher<unsigned short, std::__1::__hash_value_type<unsigned short, TSU::UUIDData<TSP::UUIDData> >, std::__1::hash<unsigned short>, true> >=Q}{__compressed_pair<float, std::__1::__unordered_map_equal<unsigned short, std::__1::__hash_value_type<unsigned short, TSU::UUIDData<TSP::UUIDData> >, std::__1::equal_to<unsigned short>, true> >=f}}}{unordered_map<TSU::UUIDData<TSP::UUIDData>, unsigned short, std::__1::hash<TSUUUID>, std::__1::equal_to<TSU::UUIDData<TSP::UUIDData> >, std::__1::allocator<std::__1::pair<const TSU::UUIDData<TSP::UUIDData>, unsigned short> > >={__hash_table<std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, unsigned short>, std::__1::__unordered_map_hasher<TSU::UUIDData<TSP::UUIDData>, std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, unsigned short>, std::__1::hash<TSUUUID>, true>, std::__1::__unordered_map_equal<TSU::UUIDData<TSP::UUIDData>, std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, unsigned short>, std::__1::equal_to<TSU::UUIDData<TSP::UUIDData> >, true>, std::__1::allocator<std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, unsigned short> > >={unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, unsigned short>, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, unsigned short>, void *> *> *> > >={__compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, unsigned short>, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, unsigned short>, void *> *> *> > >=^^{__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, unsigned short>, void *> *>}{__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, unsigned short>, void *> *> *> >={__compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, unsigned short>, void *> *> *> >=Q}}}}{__compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, unsigned short>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, unsigned short>, void *> > >={__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, unsigned short>, void *> *>=^{__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, unsigned short>, void *> *>}}}{__compressed_pair<unsigned long, std::__1::__unordered_map_hasher<TSU::UUIDData<TSP::UUIDData>, std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, unsigned short>, std::__1::hash<TSUUUID>, true> >=Q}{__compressed_pair<float, std::__1::__unordered_map_equal<TSU::UUIDData<TSP::UUIDData>, std::__1::__hash_value_type<TSU::UUIDData<TSP::UUIDData>, unsigned short>, std::__1::equal_to<TSU::UUIDData<TSP::UUIDData> >, true> >=f}}}{unordered_map<unsigned short, unsigned short, std::__1::hash<unsigned short>, std::__1::equal_to<unsigned short>, std::__1::allocator<std::__1::pair<const unsigned short, unsigned short> > >={__hash_table<std::__1::__hash_value_type<unsigned short, unsigned short>, std::__1::__unordered_map_hasher<unsigned short, std::__1::__hash_value_type<unsigned short, unsigned short>, std::__1::hash<unsigned short>, true>, std::__1::__unordered_map_equal<unsigned short, std::__1::__hash_value_type<unsigned short, unsigned short>, std::__1::equal_to<unsigned short>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned short, unsigned short> > >={unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned short, unsigned short>, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned short, unsigned short>, void *> *> *> > >={__compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned short, unsigned short>, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned short, unsigned short>, void *> *> *> > >=^^{__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned short, unsigned short>, void *> *>}{__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned short, unsigned short>, void *> *> *> >={__compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned short, unsigned short>, void *> *> *> >=Q}}}}{__compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned short, unsigned short>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned short, unsigned short>, void *> > >={__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned short, unsigned short>, void *> *>=^{__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned short, unsigned short>, void *> *>}}}{__compressed_pair<unsigned long, std::__1::__unordered_map_hasher<unsigned short, std::__1::__hash_value_type<unsigned short, unsigned short>, std::__1::hash<unsigned short>, true> >=Q}{__compressed_pair<float, std::__1::__unordered_map_equal<unsigned short, std::__1::__hash_value_type<unsigned short, unsigned short>, std::__1::equal_to<unsigned short>, true> >=f}}}{unordered_set<unsigned short, std::__1::hash<unsigned short>, std::__1::equal_to<unsigned short>, std::__1::allocator<unsigned short> >={__hash_table<unsigned short, std::__1::hash<unsigned short>, std::__1::equal_to<unsigned short>, std::__1::allocator<unsigned short> >={unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<unsigned short, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<unsigned short, void *> *> *> > >={__compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<unsigned short, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<unsigned short, void *> *> *> > >=^^{__hash_node_base<std::__1::__hash_node<unsigned short, void *> *>}{__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<unsigned short, void *> *> *> >={__compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<unsigned short, void *> *> *> >=Q}}}}{__compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<unsigned short, void *> *>, std::__1::allocator<std::__1::__hash_node<unsigned short, void *> > >={__hash_node_base<std::__1::__hash_node<unsigned short, void *> *>=^{__hash_node_base<std::__1::__hash_node<unsigned short, void *> *>}}}{__compressed_pair<unsigned long, std::__1::hash<unsigned short> >=Q}{__compressed_pair<float, std::__1::equal_to<unsigned short> >=f}}}}{unordered_map<unsigned short, TSCEFormulaOwnerDependencies *, std::__1::hash<unsigned short>, std::__1::equal_to<unsigned short>, std::__1::allocator<std::__1::pair<const unsigned short, TSCEFormulaOwnerDependencies *> > >={__hash_table<std::__1::__hash_value_type<unsigned short, TSCEFormulaOwnerDependencies *>, std::__1::__unordered_map_hasher<unsigned short, std::__1::__hash_value_type<unsigned short, TSCEFormulaOwnerDependencies *>, std::__1::hash<unsigned short>, true>, std::__1::__unordered_map_equal<unsigned short, std::__1::__hash_value_type<unsigned short, TSCEFormulaOwnerDependencies *>, std::__1::equal_to<unsigned short>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned short, TSCEFormulaOwnerDependencies *> > >={unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned short, TSCEFormulaOwnerDependencies *>, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned short, TSCEFormulaOwnerDependencies *>, void *> *> *> > >={__compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned short, TSCEFormulaOwnerDependencies *>, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned short, TSCEFormulaOwnerDependencies *>, void *> *> *> > >=^^{__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned short, TSCEFormulaOwnerDependencies *>, void *> *>}{__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned short, TSCEFormulaOwnerDependencies *>, void *> *> *> >={__compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned short, TSCEFormulaOwnerDependencies *>, void *> *> *> >=Q}}}}{__compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned short, TSCEFormulaOwnerDependencies *>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned short, TSCEFormulaOwnerDependencies *>, void *> > >={__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned short, TSCEFormulaOwnerDependencies *>, void *> *>=^{__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned short, TSCEFormulaOwnerDependencies *>, void *> *>}}}{__compressed_pair<unsigned long, std::__1::__unordered_map_hasher<unsigned short, std::__1::__hash_value_type<unsigned short, TSCEFormulaOwnerDependencies *>, std::__1::hash<unsigned short>, true> >=Q}{__compressed_pair<float, std::__1::__unordered_map_equal<unsigned short, std::__1::__hash_value_type<unsigned short, TSCEFormulaOwnerDependencies *>, std::__1::equal_to<unsigned short>, true> >=f}}}{unordered_set<TSU::UUIDData<TSP::UUIDData>, std::__1::hash<TSUUUID>, std::__1::equal_to<TSU::UUIDData<TSP::UUIDData> >, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > >={__hash_table<TSU::UUIDData<TSP::UUIDData>, std::__1::hash<TSUUUID>, std::__1::equal_to<TSU::UUIDData<TSP::UUIDData> >, std::__1::allocator<TSU::UUIDData<TSP::UUIDData> > >={unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<TSU::UUIDData<TSP::UUIDData>, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<TSU::UUIDData<TSP::UUIDData>, void *> *> *> > >={__compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<TSU::UUIDData<TSP::UUIDData>, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<TSU::UUIDData<TSP::UUIDData>, void *> *> *> > >=^^{__hash_node_base<std::__1::__hash_node<TSU::UUIDData<TSP::UUIDData>, void *> *>}{__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<TSU::UUIDData<TSP::UUIDData>, void *> *> *> >={__compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<TSU::UUIDData<TSP::UUIDData>, void *> *> *> >=Q}}}}{__compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<TSU::UUIDData<TSP::UUIDData>, void *> *>, std::__1::allocator<std::__1::__hash_node<TSU::UUIDData<TSP::UUIDData>, void *> > >={__hash_node_base<std::__1::__hash_node<TSU::UUIDData<TSP::UUIDData>, void *> *>=^{__hash_node_base<std::__1::__hash_node<TSU::UUIDData<TSP::UUIDData>, void *> *>}}}{__compressed_pair<unsigned long, std::__1::hash<TSUUUID> >=Q}{__compressed_pair<float, std::__1::equal_to<TSU::UUIDData<TSP::UUIDData> > >=f}}}B{deque<TSCEInternalCellReference, std::__1::allocator<TSCEInternalCellReference> >={__split_buffer<TSCEInternalCellReference *, std::__1::allocator<TSCEInternalCellReference *> >=^^{TSCEInternalCellReference}^^{TSCEInternalCellReference}^^{TSCEInternalCellReference}{__compressed_pair<TSCEInternalCellReference **, std::__1::allocator<TSCEInternalCellReference *> >=^^{TSCEInternalCellReference}}}Q{__compressed_pair<unsigned long, std::__1::allocator<TSCEInternalCellReference> >=Q}}{TSCEInternalCellRefSet={unordered_map<unsigned short, TSCECellCoordSet, std::__1::hash<unsigned short>, std::__1::equal_to<unsigned short>, std::__1::allocator<std::__1::pair<const unsigned short, TSCECellCoordSet> > >={__hash_table<std::__1::__hash_value_type<unsigned short, TSCECellCoordSet>, std::__1::__unordered_map_hasher<unsigned short, std::__1::__hash_value_type<unsigned short, TSCECellCoordSet>, std::__1::hash<unsigned short>, true>, std::__1::__unordered_map_equal<unsigned short, std::__1::__hash_value_type<unsigned short, TSCECellCoordSet>, std::__1::equal_to<unsigned short>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned short, TSCECellCoordSet> > >={unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned short, TSCECellCoordSet>, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned short, TSCECellCoordSet>, void *> *> *> > >={__compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned short, TSCECellCoordSet>, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned short, TSCECellCoordSet>, void *> *> *> > >=^^{__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned short, TSCECellCoordSet>, void *> *>}{__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned short, TSCECellCoordSet>, void *> *> *> >={__compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned short, TSCECellCoordSet>, void *> *> *> >=Q}}}}{__compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned short, TSCECellCoordSet>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned short, TSCECellCoordSet>, void *> > >={__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned short, TSCECellCoordSet>, void *> *>=^{__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned short, TSCECellCoordSet>, void *> *>}}}{__compressed_pair<unsigned long, std::__1::__unordered_map_hasher<unsigned short, std::__1::__hash_value_type<unsigned short, TSCECellCoordSet>, std::__1::hash<unsigned short>, true> >=Q}{__compressed_pair<float, std::__1::__unordered_map_equal<unsigned short, std::__1::__hash_value_type<unsigned short, TSCECellCoordSet>, std::__1::equal_to<unsigned short>, true> >=f}}}}{deque<TSCEInternalCellReference, std::__1::allocator<TSCEInternalCellReference> >={__split_buffer<TSCEInternalCellReference *, std::__1::allocator<TSCEInternalCellReference *> >=^^{TSCEInternalCellReference}^^{TSCEInternalCellReference}^^{TSCEInternalCellReference}{__compressed_pair<TSCEInternalCellReference **, std::__1::allocator<TSCEInternalCellReference *> >=^^{TSCEInternalCellReference}}}Q{__compressed_pair<unsigned long, std::__1::allocator<TSCEInternalCellReference> >=Q}}{vector<TSCEInternalCellReference, std::__1::allocator<TSCEInternalCellReference> >=^{TSCEInternalCellReference}^{TSCEInternalCellReference}{__compressed_pair<TSCEInternalCellReference *, std::__1::allocator<TSCEInternalCellReference> >=^{TSCEInternalCellReference}}}{TSCEInternalCellReference={TSUCellCoord=ISBB}SS}{_opaque_pthread_mutex_t=q[56c]}{TSCEInternalCellRefSet={unordered_map<unsigned short, TSCECellCoordSet, std::__1::hash<unsigned short>, std::__1::equal_to<unsigned short>, std::__1::allocator<std::__1::pair<const unsigned short, TSCECellCoordSet> > >={__hash_table<std::__1::__hash_value_type<unsigned short, TSCECellCoordSet>, std::__1::__unordered_map_hasher<unsigned short, std::__1::__hash_value_type<unsigned short, TSCECellCoordSet>, std::__1::hash<unsigned short>, true>, std::__1::__unordered_map_equal<unsigned short, std::__1::__hash_value_type<unsigned short, TSCECellCoordSet>, std::__1::equal_to<unsigned short>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned short, TSCECellCoordSet> > >={unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned short, TSCECellCoordSet>, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned short, TSCECellCoordSet>, void *> *> *> > >={__compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned short, TSCECellCoordSet>, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned short, TSCECellCoordSet>, void *> *> *> > >=^^{__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned short, TSCECellCoordSet>, void *> *>}{__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned short, TSCECellCoordSet>, void *> *> *> >={__compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned short, TSCECellCoordSet>, void *> *> *> >=Q}}}}{__compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned short, TSCECellCoordSet>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned short, TSCECellCoordSet>, void *> > >={__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned short, TSCECellCoordSet>, void *> *>=^{__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned short, TSCECellCoordSet>, void *> *>}}}{__compressed_pair<unsigned long, std::__1::__unordered_map_hasher<unsigned short, std::__1::__hash_value_type<unsigned short, TSCECellCoordSet>, std::__1::hash<unsigned short>, true> >=Q}{__compressed_pair<float, std::__1::__unordered_map_equal<unsigned short, std::__1::__hash_value_type<unsigned short, TSCECellCoordSet>, std::__1::equal_to<unsigned short>, true> >=f}}}}AqQBQ@@}16@0:8, name: dependencyTracker
- (id)emptyReferenceSetWrapper;
- (struct TSCEReferenceSet)emptyReferenceSet;
- (struct TSCEReferenceSet)precedentsOfCell:(const struct TSCECellRef *)arg1;
@property(readonly, retain, nonatomic) id <TSCERefParsingProtocol> refParser;
@property(readonly, retain, nonatomic) id <TSCERefNamingProtocol> namer;
- (_Bool)referenceIsValid:(const struct TSCERangeRef *)arg1;
- (_Bool)rangeIsWithinTable:(const struct TSCERangeRef *)arg1;
- (void)markRemoteDataVolatileFunctionsAsDirtyForKeys:(id)arg1;
- (void)replaceRemoteDataKeysInterestedIn:(id)arg1 forCell:(const struct TSCECellRef *)arg2;
- (void)setRemoteDataStore:(id)arg1;
@property(readonly) TSCERemoteDataStore *remoteDataStore;
- (void)resetCorruptCellRefs:(const struct TSCEInternalCellRefSet *)arg1;
- (struct TSCEInternalCellRefSet)corruptCellRefs;
- (void)clearRecalculationTimer;
- (double)recalcTimeInSecs;
- (_Bool)hasRunRecalculationALongTime;
- (void)endBatchingGroupCellDirtying;
- (void)beginBatchingGroupCellDirtying;
- (struct TSCEValue)evaluateSynchedWithCalcEngineWithFormula:(struct TSCEFormula *)arg1 evalContext:(struct TSCEEvaluationContext *)arg2;
- (void)executeBlockWhileCalculationEngineIsNotWriting:(CDUnknownBlockType)arg1;
- (void)willModify;
- (void)willClose;
- (void)startRecalcTaskIfNecessary;
- (void)startRecalculation;
- (void)pauseRecalculationForBlock:(CDUnknownBlockType)arg1;
- (_Bool)recalculationIsPaused;
- (void)resumeRecalculation;
- (void)pauseRecalculationSometimeSoon;
- (void)pauseRecalculation;
- (void)endSuppressingWillModifyCalls;
- (void)beginSuppressingWillModifyCalls;
- (void)blockUntilRecalcIsCompleteWithTimeout:(double)arg1;
- (void)p_blockUntilRecalcIsCompleteOnNewThreadWithTimeout:(id)arg1;
- (_Bool)isCellReferenceDirty:(const struct TSCECellRef *)arg1;
- (_Bool)cellContainsAFormula:(const struct TSCEInternalCellReference *)arg1;
- (void)markOwnerAsDirty:(const UUIDData_5fbc143e *)arg1;
- (void)markRemoteDataVolatileFunctionsAsDirty;
- (void)markGeometryVolatileFunctionsAsDirtyInOwner:(const UUIDData_5fbc143e *)arg1;
- (void)markCompassVolatileFunctionsAsDirty;
- (void)markLocationVolatileFunctionsAsDirty;
- (void)markLocaleVolatileFunctionsAsDirty;
- (void)markRandomVolatileFunctionsAsDirty;
@property(readonly, nonatomic) _Bool shouldSendSetNowCommand;
- (void)popRewriteSpec:(id)arg1;
- (void)pushRewriteSpec:(id)arg1;
- (id)rewriteSpecStack;
- (void)markTimeVolatileFunctionsAsDirtyForCurrentDateTime;
- (void)markTimeVolatileFunctionsAsDirty;
- (_Bool)hasRemoteDataFunctions;
- (_Bool)hasTimeVolatileFunctions;
- (void)detectAndRepairConsistencyViolations;
- (void)markOnlyDependentsDirty:(const struct TSCECellRef *)arg1;
- (void)markIndirectCallsAsDirty;
- (void)markAllFunctionsAsDirty;
- (void)markAllExternalGroupByRefsDirty:(const UUIDData_5fbc143e *)arg1;
- (void)markRangeRefAsDirty:(const struct TSCERangeRef *)arg1;
- (void)dirtyCellsForMergingRange:(struct TSCERangeCoordinate)arg1 forTable:(const UUIDData_5fbc143e *)arg2 headerRowRange:(struct TSCERangeCoordinate)arg3 headerColumnRange:(struct TSCERangeCoordinate)arg4;
- (void)dirtyCellsForInsertionOfRows:(struct _NSRange)arg1 forTable:(const UUIDData_5fbc143e *)arg2 tableRange:(struct TSCERangeCoordinate)arg3 headerRange:(struct TSCERangeCoordinate)arg4;
- (void)dirtyCellsForInsertionOfColumns:(struct _NSRange)arg1 forTable:(const UUIDData_5fbc143e *)arg2 tableRange:(struct TSCERangeCoordinate)arg3 headerRange:(struct TSCERangeCoordinate)arg4;
- (void)dirtyCellsForRemovalOfRows:(struct _NSRange)arg1 fromTable:(const UUIDData_5fbc143e *)arg2 tableRange:(struct TSCERangeCoordinate)arg3;
- (void)dirtyCellsForRemovalOfColumns:(struct _NSRange)arg1 fromTable:(const UUIDData_5fbc143e *)arg2 tableRange:(struct TSCERangeCoordinate)arg3;
- (void)headerStateOfTableChanged:(const UUIDData_5fbc143e *)arg1;
- (void)headerStateOfTableChanged:(const UUIDData_5fbc143e *)arg1 changedRows:(_Bool)arg2;
- (void)markCellRefsAsDirty:(id)arg1;
- (void)markCellRefAsDirty:(const struct TSCECellRef *)arg1;
- (void)rollbackTableUIDHistoryWithRewriteInfo:(id)arg1;
- (id)extendTableUIDHistoryWithRewrite:(id)arg1;
- (_Bool)clearCellIsDirtyAfterRecalc:(const struct TSCECellRef *)arg1;
- (_Bool)referenceWasGuaranteedCleanAtRecalcCycleStart:(const struct TSCEAnyRef *)arg1;
- (_Bool)cellWillBeModifiedInCurrentRecalcCycle:(const struct TSCECellRef *)arg1;
- (_Bool)cellIsInACycle:(const struct TSCECellRef *)arg1;
- (_Bool)allCellsAreClean;
- (unsigned long long)dirtyCellCount;
- (unsigned long long)dirtyCellCountInOwner:(const UUIDData_5fbc143e *)arg1;
- (_Bool)hasFormulaCellsUsingVolatileTypes:(unsigned int)arg1;
- (vector_38b190b0)formulaCoordsInRange:(const struct TSCERangeCoordinate *)arg1 inOwner:(const UUIDData_5fbc143e *)arg2;
- (vector_38b190b0)formulaCoordsReferringToRange:(const struct TSCERangeRef *)arg1 fromOwner:(const UUIDData_5fbc143e *)arg2;
- (struct TSCECellRef)rootCauseForErrorInCell:(const struct TSCECellRef *)arg1 atRootCell:(_Bool *)arg2;
- (void)clearErrorForCell:(const struct TSCECellRef *)arg1;
- (void)setError:(id)arg1 forCell:(const struct TSCECellRef *)arg2;
- (void)removeFormulasAtCellRefs:(id)arg1;
- (void)removeFormulasFromRange:(const struct TSCERangeRef *)arg1;
- (void)removeAllFormulasFromOwner:(const UUIDData_5fbc143e *)arg1;
- (void)removeFormulaAt:(const struct TSUCellCoord *)arg1 inOwner:(const UUIDData_5fbc143e *)arg2;
- (void)replaceFormulaAt:(const struct TSUCellCoord *)arg1 inOwner:(const UUIDData_5fbc143e *)arg2 precedents:(id)arg3 replaceOptions:(const struct TSCEReplaceFormulaOptions *)arg4;
- (void)replaceFormula:(id)arg1 atCellCoord:(const struct TSUCellCoord *)arg2 inOwner:(const UUIDData_5fbc143e *)arg3;
- (void)replaceFormula:(id)arg1 atCellCoord:(const struct TSUCellCoord *)arg2 inOwner:(const UUIDData_5fbc143e *)arg3 replaceOptions:(struct TSCEReplaceFormulaOptions)arg4;
- (void)closeTransaction:(id)arg1;
- (id)openTransaction;
- (UUIDData_5fbc143e)uuidForTableUID:(const UUIDData_5fbc143e *)arg1 andIndex:(unsigned int)arg2 direction:(_Bool)arg3;
- (void)setOwnerUIDForLegacyGlobalID:(id)arg1 ownerUID:(const UUIDData_5fbc143e *)arg2;
- (UUIDData_5fbc143e)ownerUIDForLegacyGlobalID:(id)arg1 registeringIfNeeded:(_Bool)arg2;
- (id)resolverMatchingNameWithContextContainer:(id)arg1 contextContainerName:(id)arg2;
- (id)resolverMatchingName:(id)arg1 contextResolver:(id)arg2;
- (id)resolverContainerMatchingName:(id)arg1;
- (UUIDData_5fbc143e)formulaOwnerUIDForInternalFormulaOwnerID:(unsigned short)arg1;
- (unsigned short)internalFormulaOwnerIDForFormulaOwnerUID:(const UUIDData_5fbc143e *)arg1;
- (struct TSCETableResolver *)tableResolverForRefResolver:(id)arg1;
- (struct TSCETableResolver *)tableOrLinkedResolverForTableUID:(const UUIDData_5fbc143e *)arg1;
- (struct TSCETableResolver *)tableResolverForTableID:(unsigned short)arg1;
- (struct TSCETableResolver *)tableResolverForTableUID:(const UUIDData_5fbc143e *)arg1;
- (id)resolverForTableID:(unsigned short)arg1;
- (id)resolverForTableUID:(const UUIDData_5fbc143e *)arg1;
- (id)anyResolver;
- (id)resolverForCellRef:(id)arg1;
- (void)clearLegacyGlobalIDs;
- (unsigned long long)cellDependMemoryUseEstimate;
- (void)enumerateFormulaOwnersUsingBlock:(CDUnknownBlockType)arg1;
- (vector_4dc5f307)allRefResolverOwnerUIDs;
- (_Bool)allOwnersRegistered;
- (id)ownerForOwnerUID:(const UUIDData_5fbc143e *)arg1;
- (_Bool)ownerIsRegistered:(const UUIDData_5fbc143e *)arg1;
- (void)unregisterOwner:(const UUIDData_5fbc143e *)arg1;
- (int)ownerKindForOwnerID:(unsigned short)arg1;
- (int)ownerKindForOwnerUID:(const UUIDData_5fbc143e *)arg1;
- (int)registerOwnerWithOwnerUID:(const UUIDData_5fbc143e *)arg1 owner:(id)arg2 referenceResolver:(id)arg3 ownerKind:(int)arg4;
- (int)forwardRegisterOwnerWithOwnerUID:(const UUIDData_5fbc143e *)arg1 legacyGlobalID:(id)arg2;
- (void)dirtyCellsForUpgrade;
- (void)recalculateWithTimeout:(double)arg1;
- (void)notifyObserversOfRecalcProgress;
- (void)wroteCells:(const vector_38b190b0 *)arg1 inOwnerUID:(const UUIDData_5fbc143e *)arg2;
- (_Bool)isInCollaborationMode;
- (void)documentDidLoad;
@property(nonatomic) __weak TSKChangeNotifier *changeNotifier;
@property(nonatomic) __weak TSKAccessController *accessController;
- (void)dealloc;
- (id)initWithContext:(id)arg1;
- (void)applicationWillResignActive:(id)arg1;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)p_removeApplicationNotification;
- (void)p_addApplicationNotification;
@property(nonatomic) _Bool duringRollback;
@property(retain) id <TSKMultiTableRemapping> currentTableIdRemapper;
@property(readonly) TSCERewriteTableUIDInfo *tableUIDHistory;
@property(readonly) TSCEGroupByNodeMap *groupNodeReferenceMap;
@property(readonly) TSCEUUidReferenceMap *uuidReferenceMap;
@property(readonly, nonatomic) TSCENamedReferenceManager *namedReferenceManager;
@property(readonly) TSCETablesByName *tablesByName;
@property(nonatomic) unsigned long long loadFromFileVersion;
@property(readonly) NSString *previousLocaleIdentifier;
@property(readonly) TSCETransaction *currentTransaction;
@property int XLImportDateMode;
@property(readonly) _Bool shouldAbortRecalculation;
- (id)currentTimeZoneCalendar;
@property(retain) NSTimeZone *currentTimeZone;
@property(retain) NSDate *currentDate;
@property unsigned long long documentRandomSeed;
- (id)legacyGlobalIDStringToOwnerUIDMap;

@end


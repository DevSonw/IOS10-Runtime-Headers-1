//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GeoServices/GEOMapEdgeFinder.h>

__attribute__((visibility("hidden")))
@interface GEOMapEdgeRoadFinder : GEOMapEdgeFinder
{
    struct unordered_set<GEORoadEdge, std::__1::hash<GEORoadEdge>, std::__1::equal_to<GEORoadEdge>, std::__1::allocator<GEORoadEdge>> _roadsConsidered;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (_Bool)_checkEdgeForDuplicates:(const shared_ptr_035a2da2 *)arg1;
- (void)_buildersInTile:(id)arg1 localPoint:(const Matrix_8746f91e *)arg2 localRadiusSqr:(float)arg3 localSearch:(const Box_3fb92e00 *)arg4 handler:(CDUnknownBlockType)arg5;
- (void)dealloc;
- (id)initWithMap:(id)arg1 center:(CDStruct_c3b9c2ee)arg2 radius:(double)arg3;

@end


class_<NCollection_BaseList>("NCollection_BaseList")
  .function("Extent", &NCollection_BaseList::Extent)
  .function("IsEmpty", &NCollection_BaseList::IsEmpty)
  .function("Allocator", &NCollection_BaseList::Allocator)
;
class_<TopTools_ListOfShape, base<NCollection_BaseList>>("TopTools_ListOfShape")
  .constructor<>()
  .constructor<Handle_NCollection_BaseAllocator&>()
  .function("Size", &TopTools_ListOfShape::Size)
  .function("Assign", static_cast<TopTools_ListOfShape& (TopTools_ListOfShape::*) (const TopTools_ListOfShape&) >((TopTools_ListOfShape& (TopTools_ListOfShape::*)(const TopTools_ListOfShape&) ) &TopTools_ListOfShape::Assign))
  .function("operator_assign", static_cast<TopTools_ListOfShape& (TopTools_ListOfShape::*) (const TopTools_ListOfShape&) >((TopTools_ListOfShape& (TopTools_ListOfShape::*)(const TopTools_ListOfShape&) ) &TopTools_ListOfShape::operator=))
  .function("Clear", &TopTools_ListOfShape::Clear)
  .function("First_1", static_cast<const TopoDS_Shape& (TopTools_ListOfShape::*) () const>((const TopoDS_Shape& (TopTools_ListOfShape::*)() const) &TopTools_ListOfShape::First))
  .function("First_2", static_cast<TopoDS_Shape& (TopTools_ListOfShape::*) () >((TopoDS_Shape& (TopTools_ListOfShape::*)() ) &TopTools_ListOfShape::First))
  .function("Last_1", static_cast<const TopoDS_Shape& (TopTools_ListOfShape::*) () const>((const TopoDS_Shape& (TopTools_ListOfShape::*)() const) &TopTools_ListOfShape::Last))
  .function("Last_2", static_cast<TopoDS_Shape& (TopTools_ListOfShape::*) () >((TopoDS_Shape& (TopTools_ListOfShape::*)() ) &TopTools_ListOfShape::Last))
  .function("Append_1", static_cast<TopoDS_Shape& (TopTools_ListOfShape::*) (const TopoDS_Shape&) >((TopoDS_Shape& (TopTools_ListOfShape::*)(const TopoDS_Shape&) ) &TopTools_ListOfShape::Append))
  // .function("Append_2", ...)
  .function("Append_3", static_cast<void (TopTools_ListOfShape::*) (TopTools_ListOfShape&) >((void (TopTools_ListOfShape::*)(TopTools_ListOfShape&) ) &TopTools_ListOfShape::Append))
  .function("Prepend_1", static_cast<TopoDS_Shape& (TopTools_ListOfShape::*) (const TopoDS_Shape&) >((TopoDS_Shape& (TopTools_ListOfShape::*)(const TopoDS_Shape&) ) &TopTools_ListOfShape::Prepend))
  .function("Prepend_2", static_cast<void (TopTools_ListOfShape::*) (TopTools_ListOfShape&) >((void (TopTools_ListOfShape::*)(TopTools_ListOfShape&) ) &TopTools_ListOfShape::Prepend))
  .function("RemoveFirst", &TopTools_ListOfShape::RemoveFirst)
  // .function("Remove_1", ...)
  // .function("Remove_2", ...)
  // .function("InsertBefore_1", ...)
  // .function("InsertBefore_2", ...)
  // .function("InsertAfter_1", ...)
  // .function("InsertAfter_2", ...)
  .function("Reverse", &TopTools_ListOfShape::Reverse)
  // .function("Contains", ...)
;

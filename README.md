![logo](mobject_logo.png) 
# Mobject

  Mobject is a distributed object storage system
 built using a composition of [Mochi](https://mochi.readthedocs.io) components: 
 
 * [mochi-bake](https://github.com/mochi-hpc/mochi-bake) (for bulk storage)
 * [mochi-bedrock](https://github.com/mochi-hpc/mochi-bedrock) 
   (for configuration and bootstrapping) 
 * [mochi-sdskv](https://github.com/mochi-hpc/mochi-sdskv)
   (for metadata and log indexing)
 * [mochi-ssg](https://github.com/mochi-hpc/mochi-ssg) (for group membership)

 
## Installation

  [Install Spack and Mochi Spack Repository](https://mochi.readthedocs.io/en/latest/installing.html#installing-spack-and-the-mochi-repository).
  
  Then, run the following command to install mobject.
```
   spack install mobject
```

## HDF5 and Mobject

  [Mobject API](/include/librados-mobject-store.h) is a subset of the 
  [RADOS API](https://github.com/ceph/ceph/blob/main/src/include/rados/librados.h) 
  from Ceph’s object storage layer.
Therefore, [HDF5 RADOS VOL plugin-in](https://github.com/HDFGroup/vol-rados)
can use Mobject.

## FAQ

See [doc/FAQ.md](doc/FAQ.md).



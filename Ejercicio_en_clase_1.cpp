int main() {
    // Arreglos separados (sin polimorfismo)
    Producto* productos[2];
    ProductoConDescuento* productosDesc[2];

    // Productos normales
    productos[0] = new Producto("Arroz", 3000, 3);
    productos[1] = new Producto("Leche", 2500, 2);

    // Productos con descuento
    productosDesc[0] = new ProductoConDescuento("Laptop", 2500000, 1, 0.10);
    productosDesc[1] = new ProductoConDescuento("Celular", 1200000, 1, 0.15);

    // Mostrar normales
    for (int i = 0; i < 2; i++) {
        productos[i]->mostrar();
    }

    // Mostrar con descuento
    for (int i = 0; i < 2; i++) {
        productosDesc[i]->mostrarConDescuento();
    }

    // Liberar memoria
    for (int i = 0; i < 2; i++) {
        delete productos[i];
        delete productosDesc[i];
    }

    return 0;
}